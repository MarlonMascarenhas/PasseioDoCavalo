# PasseioDoCavalo 

Esse projeto foi criado para a matéria de Inteligência Artificial do IFMG campus formiga. 

Esse projeto utiliza 3 linguagens: C (para criar a matriz de passos que o cavalo pode fazer), R (para fazer a parte de genética) e Java (para fazer o tabuleiro e os passos do cavalo). 

O intuito deste projeto é ajudar outras pessoas que pretendem fazer o mesmo trabalho. 

Para Executar o programa você deve seguir os passos: 

Instalação do NetBeans 

Entre no site: https://netbeans.org/downloads/8.0.1/?pagelang=pt_BR e baixe a versão completa. Siga os passos de instalação do próprio netbeans. 

Entre no site: https://sourceforge.net/projects/tdm-gcc/ e baixe o programa e instale, isso permitira que você rode arquivos C. 

Entre no site: https://www.rstudio.com/products/rstudio/download/ e baixe a versão free e siga as instruções de instalação do app. 



Para gerar todos os possíveis movimentos do cavalo rode o arquivo geradorMovimentos. 

Entre no terminal e vá até a pasta que você baixou os arquivos. 

Execute o comando: 

gcc geradorMovimentos.c -o prog #isso irá gerar um arquivo executavel do geradorMovimentos 

./prog #isso irá rodar o executável. 

Agora que você já possui todos os movimentos que o cavalo pode fazer, você pode colocar a sua IA para trabalhar.

Abra o arquivo GA-Passeio-Do-Cavalo, ele devera abrir o seu Rstudio. No console do Rstudio execute os comandos: 

install.packages('GA') #isso ira instalar todos os pacotes da library de algoritmos genéticos. 

install.packages('datasets') #isso ira instalar a library que permitira criar datasets. 

No editor de texto do Rstudio use CTRL + A e clique em RUN. 

Para melhorar a qualidade dos resultados altere os dados TAMPOPULACAO, NUMGERACOES e pmutation (você pode mudar esses valores o quanto quiser). 

Após executar o arquivo GA-Passeio-Do-Cavalo, a sua IA terá criado uma linha no arquivo CaminhoCavalo.txt (que já contem alguns testes feitos por mim, se quiser apagar todos os testes você pode MAS O ARQUIVO DEVE COMEÇAR COM "d ") 

Apos rodar seus testes em R 
Pegue os arquivos CaminhoCavalo, MatrizCavalo e matrizFinalCavalo e jogue dentro da pasta GeradorCaminhoTab. 

Abra o seu netbeans, vá até abrir projetos e selecione a pasta GeradorCaminhoTab. 

Com isso você pode executar o projeto Java que será aberto, e você poderá ver todos os seus testes sendo executados em um tabuleiro em Java, as casas verdes representam os movimentos corretos que o cavalo fez já as vermelhas os movimentos incorretos do cavalo (levando em consideração que o cavalo não sabe quais são seus movimentos corretos e incorretos)
