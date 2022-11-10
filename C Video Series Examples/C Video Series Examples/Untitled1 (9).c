#include <stdio.h>
void matris(int mat[][5],int satir, int sutun){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		mat[i][j]=(i+2)*(j+1);
	}
}
}
void matris1(int mat[][5],int satir, int sutun){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
	 	    printf("%d\t",mat[i][j]);
	}
	printf("\n");
}
}
void matris2(int mat[][5],int satir, int sutun){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
	 	    printf("%d\t",mat[j][i]);
	}
	printf("\n");
}
}
int main(){
	int a,b;
	printf("Please enter a number : ");
	scanf("%d",&a);
	printf("Please enter a number : ");
	scanf("%d",&b);
	int mat[a][b];
	matris(mat,a,b);
	printf("\n\n----------------------------------------------\n\n");
	printf("Normal Declaration");
	printf("\n\n----------------------------------------------\n\n");
	matris1(mat,a,b);
	printf("\n\n----------------------------------------------\n\n");
	printf("Transpoz Declaration");
	printf("\n\n----------------------------------------------\n\n");
	matris2(mat,a,b);
	return 0;
}
