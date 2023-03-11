#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2
	
	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
    	float Matriz[LIN][COL] = {{1, 2},{3, 4}};
    	float Matriz_inv[LIN][COL], det;

    	for(int i=0; i<2; i++){
    		int j=(i+1)%2;
    		det=(Matriz[0][i] * Matriz[1][j]) - (Matriz[0][j] * Matriz[1][i]);
				}
				
		printf("Matriz Inversa\n");
    	for(int i=0; i<LIN; i++){
        	for(int j=0; j<COL; j++){
            	Matriz_inv[i][j]= Matriz[i][j]/det;
				}
			}
		for(int i=0; i<LIN; i++){
        	for(int j=0; j<COL; j++){
        		printf("%.1f\t", Matriz_inv[i][j]);
				}
				printf("\n");
			}
			return 0;
		}
		
		
		

	
