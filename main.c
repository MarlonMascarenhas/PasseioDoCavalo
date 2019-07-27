#include <stdio.h>
#include <string.h>

void main()
{
	FILE *arq;
 	char Linha[100];
  	char *result;
  	int i, j, h;
  	int a1,a2,a3,a4,a5,a6,a7,a8, a11, a22, a33, a44, a55, a66, a77, a88;
  	int conta = 64, vez = 0, para = 0;
  	int matriz[8][8];
	arq = fopen("matrizCavalo.txt", "w");
	fprintf(arq, "%d \n", conta);
	conta = 0;
  	for (i = 1; i <= 8; i++) {

  		vez++;
    	for (j = 1; j <= 8; j++) {
    		a1 = i +1;
    		a11 = j +2;
    		if (a1 > 0 && a1 < 8 && a11 > 0 && a11 < 8){
    			if ((vez - 1) <= 0) {
    				conta = j;
    			} else {
    				conta = (((vez - 1)) * 8) + j;
    			}
    			
    			para  = ((conta + 8) + 2);
    			printf("%d\n", para);
    			fprintf(arq, "%d %d \n", conta, para);
    		}

    		a2 = i +1;
    		a22 = j -2;
    		if (a2 > 0 && a2 < 8 && a22 > 0 && a22 < 8){
    			if ((vez - 1) <= 0) {
    				conta = j;
    			} else {
    				conta = (((vez - 1)) * 8) + j;
    			}
    			para  = ((conta +8) -2);
    			fprintf(arq, "%d %d \n", conta, para);
    		}
    		a3 = i - 1;
    		a33 = j + 2;
    		if (a3 > 0 && a3 < 8 && a33 > 0 && a33 < 8){
    			if (((vez - 1)) <= 0) {
    				conta = j;
    			} else {
    				conta = (((vez - 1)) * 8) + j;
    			}
    			para  = ((conta - 8) + 2);
    			fprintf(arq, "%d %d \n", conta, para);
    		}
    		a4 = i - 1;
    		a44 = j - 2;
    		if (a4 > 0 && a4 < 8 && a44 > 0 && a44 < 8){
    			if ((vez - 1) <= 0) {
    				conta = j;
    			} else {
    				conta = (((vez - 1)) * 8) + j;
    			}
    			para  = ((conta -8) -2);
    			fprintf(arq, "%d %d \n", conta, para);
    		}
    		a5 = i - 2;
    		a55 = j +1;
    		if (a5 > 0 && a5 < 8 && a55 > 0 && a55 < 8){
    			if ((vez - 1) <= 0) {
    				conta = j;
    			} else {
    				conta = (((vez - 1)) * 8) + j;
    			}
    			para  = ((conta - 16) + 1);
    			fprintf(arq, "%d %d \n", conta, para);
    		}
    		a6 = i - 2;
    		a66 = j - 1;
    		if (a6 > 0 && a6 < 8 && a66 > 0 && a66 < 8){
    			if ((vez - 1) <= 0) {
    				conta = j;
    			} else {
    				conta = (((vez - 1)) * 8) + j;
    			}
    			para  = ((conta - 16) - 1);
    			fprintf(arq, "%d %d \n", conta, para);
    		}
    		a7 = i + 2;
    		a77 = j + 1;
    		if (a7 > 0 && a7 < 8 && a77 > 0 && a77 < 8){
    			if ((vez - 1) <= 0) {
    				conta = j;
    			} else {
    				conta = (((vez - 1)) * 8) + j;
    			}
    			para  = ((conta + 16)  + 1);
    			fprintf(arq, "%d %d \n", conta, para);
    		}
    		a8 = i + 2;
    		a88 = j - 1;
    		if (a8 > 0 && a8 < 8 && a88 > 0 && a88 < 8){
    			if ((vez - 1) <= 0) {
    				conta = j;
    			} else {
    				conta = (((vez - 1)) * 8) + j;
    			}
    			para  = ((conta +16) - 1);
    			fprintf(arq, "%d %d \n", conta, para);
    		}
    		

    	}
    	
  	}
  	fclose(arq); 
}