#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 3

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int matrizA[LIN][COL]={1,2,3,4,5,6,7,8,9};
		int matrizB[COL][LIN];
		
		
		for (int i=0; i<LIN; i++ ){
  			for (int j=0; j<COL; j++ ){
  			}
		}
		printf("Matriz A: \n");
  		for (int i=0; i<LIN; i++ ){
  			for (int j=0; j<COL; j++ ){
  				printf("%d\t", matrizA [i][j]);
  	
		}
		printf("\n");
	}
		printf("\n");
		//loop para inversão da Matriz A para B
		for(int i=0; i<COL; i++){
			for(int j=0; j<LIN; j++){
				matrizB[i][j]= matrizA[j][i]; //matriz B = Matriz A porem com linhas e colunas invertidas
			}
		}

		printf("Matriz B: \n");
		for(int i=0; i<COL; i++){
			for(int j=0; j<LIN; j++){	
				printf("%d\t", matrizB[i][j]);
			}
			printf("\n");
		}
  	return 0;
    }
  	
  	
  	
  	

