#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int matrizA [LIN] [COL]={{1,2},{3,4}};
		int matrizB [LIN] [COL]={{5,6},{7,8}};
		int matrizC [LIN] [COL]={{0,0},{0.0}};
		
		for(int i=0; i<LIN; i++){
    		for(int j=0; j<COL; j++){
        		for(int k=0; k<COL; k++){
            matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
			}
		}
	}
		printf("Matriz A: \n");
		for (int i=0; i<LIN; i++){
  			for (int j=0; j<COL; j++){
    			printf("[%d]", matrizA[i][j]);
				}
				printf("\n");	
			}
			printf("\n");
			
		printf("Matriz B: \n");
  		for(int i=0; i<LIN; i++){
  			for(int j=0; j<COL; j++){
  				printf("[%d]", matrizB[i][j]);
				  }
				  printf("\n");
				}
			printf("\n");
		printf("Multiplicação das matrizes: \n");
		for(int i = 0; i<LIN; i++){
  			for(int j=0; j<COL; j++){
    			printf("[%d]", matrizC[i][j]);
				}
  			printf("\n");
			 }
	return 0;
	}






