#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int **arr,int satir, int sutun){
	srand(time(NULL));
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		  printf("Enter [%d][%d] = ",i,j);
		  scanf("%d",&arr[i][j]);
	}
	}
}
void fill1(int **arr,int satir, int sutun){
	srand(time(NULL));
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		   arr[i][j]=rand()%15;  
	}
	}
}
void fill3(int **arr,int satir, int sutun){
	srand(time(NULL));
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		   arr[i][j]*=-1;  
	}
	}
}
void prin(int **arr,int satir, int sutun){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		   printf("%d\t",arr[i][j]); 
	}
	printf("\n");
	}
}
void fill2(int **mat,int **mat1,int **mat2,int satir, int sutun){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		  mat2[i][j]=mat[i][j]-mat1[i][j];
	}
	printf("\n");
	}
}
int main(){
	int satir,sutun;
	int **mat;
	int **mat1;  
	int **mat2;
	int l;
	printf("Please enter a number : ");
	scanf("%d",&satir);
	printf("Please enter a number : ");
	scanf("%d",&sutun);
	mat=(int **)malloc(sizeof(int)*satir);
	mat1=(int **)malloc(sizeof(int)*satir);
	mat2=(int **)malloc(sizeof(int)*satir);
	for(l=0;l<satir;l++){
		mat[l]=(int *)malloc(sizeof(int)*sutun);
	}
	for(l=0;l<satir;l++){
		mat1[l]=(int *)malloc(sizeof(int)*sutun);
	}
	for(l=0;l<satir;l++){
		mat2[l]=(int *)malloc(sizeof(int)*sutun);
	}
	printf("\n\n---------------------------------------------------\n\n"); 	
	printf("Matris 1 : ");
	printf("\n\n---------------------------------------------------\n\n");            
	fill(mat,satir,sutun);
	printf("\n\n---------------------------------------------------\n\n");         
	printf("Matris 2 : ");
	printf("\n\n---------------------------------------------------\n\n");
	fill(mat1,satir,sutun);	
	printf("\n\n---------------------------------------------------\n\n"); 	
    printf("Matris 1 : ");
	printf("\n\n---------------------------------------------------\n\n");       
	prin(mat,satir,sutun);
	printf("\n\n---------------------------------------------------\n\n"); 	
    printf("Matris 2 : ");
	printf("\n\n---------------------------------------------------\n\n");       
	prin(mat1,satir,sutun);
	printf("\n\n---------------------------------------------------\n\n");
	printf("Matris 3 : ");
	printf("\n\n---------------------------------------------------\n\n");
	fill2(mat,mat1,mat2,satir,sutun);
	prin(mat2,satir,sutun);
	for(l=0;l<satir;l++){
		free(mat[l]);
	}
	free(mat);
	for(l=0;l<satir;l++){
		free(mat1[l]);
	}
	free(mat1);
	for(l=0;l<satir;l++){
		free(mat2[l]);
	}
	free(mat2);
	return 0;
}
 