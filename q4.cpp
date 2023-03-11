#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2
	
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
    	int Matriz[LIN][COL] = {{2,3},{1, 4}};
    	int det=0;
    
    	for (int i=0; i<2; i++){
    		int j=(i+1)%2;
    		det = (Matriz[0][j] * Matriz[1][i]) - (Matriz[0][i] * Matriz[1][j]);
			}
			printf("O determinante da matriz é: %d", det);
		return 0;
		}
		
		
		
		
		
		
