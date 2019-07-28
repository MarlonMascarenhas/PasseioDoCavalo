#include <stdio.h>
#include <string.h>

void main()
{
  FILE *arq;
  char Linha[100];
  char *result;
  int i, j;
  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("matrizCavalo.txt", "rt");
  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }
  i = 0;
  int posi1, posi2, tam;
  char a, b;
  fscanf(arq, "%c %c %d %d \n", &a, &b, &posi1, &posi2);

  tam = posi1;
  
  int matriz[64][64]; 
  for (i = 0; i < 64; i++) {
    for (j = 0; j < 64; j++) {
      matriz[i][j] = 0;
    }
  }
    while (!feof(arq))
  {
  // Lê uma linha (inclusive com o '\n')
    fscanf(arq, "%d %d \n", &posi1, &posi2);
    matriz[posi1 - 1][posi2 - 1] = 1;
    matriz[posi2 - 1][posi1 - 1] = 1;
    
  }


  fclose(arq); 
  arq = fopen("matrizFinalCavalo.txt", "w");
  for (i = 0; i < 64; i++) {
    for (j = 0; j < 64; j++) {
      fprintf(arq, "%d\t", matriz[i][j]);
      printf("%d", j);
    }
    fprintf(arq, "\n");
  }
  fclose(arq); 
}
