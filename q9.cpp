#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2

	int main(){
		setlocale(LC_ALL,"Portuguese_Brazil");
	    int matriz[LIN][COL] = {{1,2},{3,4}};
	    int matriz90[LIN][COL];
	    
	    printf("Matriz original: \n");
	    for(int i=0; i < LIN; i++){
	        for(int j=0; j < COL; j++){
	            printf("[%d]", matriz[i][j]);
	        }
	        printf("\n");
		}
	    
	    for(int i=0; i < LIN; i++){
	        for(int j=0; j < COL; j++){
	            matriz90[j][1-i] = matriz[i][j];
	        }
	    }
	
	    printf("Matriz com giro de 90°: \n");
	    for(int i=0; i < LIN; i++){
	        for(int j=0; j < COL; j++){
	            printf("[%d]", matriz90[i][j]);
	        }
	        printf("\n");
	    }
	    return 0;
	}





