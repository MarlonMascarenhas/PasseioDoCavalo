
library('GA')
library('datasets')


arq.Graph <- read.table(file = 'matrizFinalCavalo.txt');
dataset.Graph <- data.frame(arq.Graph)

N <- 64

CreateSolution <- function(){
  for(i in 1: N){
    ind[i] <- i;
  }
  for(i in 1: N){
    pos <- runif(1,min = 0, max = N)
    tmp <- ind[i]
    ind[i] <- ind[pos]
    ind[pos] <- tmp
  }
  
}

FObj <- function(Solucao)
{
  Resultado <- 0;
  for(i in 1:N){
    for(j in 1:N){
      if(Solucao[1] != 2){
        Resultado <- -1;
      }
      if(i != j) {
        if(Solucao[i] == Solucao[j]){
          Resultado <- -1;
        }
      }
    }
  }
  if (Resultado == 0){
    # Tratamento para as 2 primeiras cidades
    Ini <- 2
    Fim <- Solucao[2]
    
    Resultado <- dataset.Graph[Ini, Fim]
    
    # Tratamento de 2..(n-1)
    for(i in 2:(N-1))
    {
      Ini <- Solucao[i]
      Fim <- Solucao[i+1]
      
      Resultado <- Resultado + dataset.Graph[Ini, Fim]
    }
    
    # Tratamento da cidade n para 1
    Resultado <- Resultado + dataset.Graph[N, 1]
  }
  
  
  
  
  
  return(Resultado)
}

TAMPOPULACAO <- 20
NUMGERACOES  <- 10
pmutation <- 0.3


# Define a funÃ§Ã£o de fitness
fitness <- function(x) { return(FObj(x)) }

# Executa o genetico com os parametros dados
GA <- ga(type = "permutation", fitness = fitness, min = 1, max = N, pmutation = pmutation, popSize=TAMPOPULACAO, maxiter=NUMGERACOES)

# Exibe resultados
#summary(GA)

# Imprime a solucao
c(GA@solution)

fileConn<-file("CaminhoCavalo.txt", 'a')
writeLines(paste(" TAMPOPULACAO <- ", TAMPOPULACAO, "NUMGERACOES <- ", NUMGERACOES," pmutation = ", pmutation, " Pontuação:", GA@fitnessValue), fileConn)
write(GA@solution, fileConn, 65)

close(fileConn)





