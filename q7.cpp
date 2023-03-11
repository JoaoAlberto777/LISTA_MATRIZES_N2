#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 3

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int matriz[LIN][COL]= {{2,0,1},{3,4,-2},{8,9,6}};
		
		for(int i=0; i <LIN; i++){
			for(int j=0; j <COL; j++){
				if(i == j){
					matriz[i][j]= matriz[i][j];
				}else{
					matriz[i][j] = 0;
				}
			}
		}
		printf("Matriz Diagonal:\n");
		for(int i=0; i < LIN; i++){
			for(int j=0; j < COL; j++){
				printf("[%d]", matriz[i][j]);
			}
			printf("\n");
		}

		
		
	return 0;
}





