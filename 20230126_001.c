#include<stdio.h>
int main(){
	int mat1[3][5];
	int mat2[3][5];
	int soma[3][5];
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<5; j++){
			mat1[i][j]=i*j;
			mat2[i][j]=i+j;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<5; j++){
			soma[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<5; j++){
			printf("[%d]", mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n+\n");
	for(i=0;i<3;i++){
		for(j=0;j<5; j++){
			printf("[%d]", mat2[i][j]);
		}
		printf("\n");
	}
	printf("\n=\n");
	for(i=0;i<3;i++){
		for(j=0;j<5; j++){
			printf("[%d]", soma[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
