#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

int array[5][5];
int array1[5][5];
int arraymax[5][5];
int i,j;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	    array[i][j]=rand()%10;
}
}
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	    array1[i][j]=rand()%10;
}
}
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	    arraymax[i][j]=array[i][j]*array1[i][j];
}
}
printf("1.Array : \n");
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	    printf("%d\t ",array[i][j]);
}
printf("\n");
}
printf("2.Array : \n");
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	    printf("%d\t ",array1[i][j]);
}
printf("\n");
}
printf("3.Array : \n");
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	    printf("%d\t ",arraymax[i][j]);
}
printf("\n");
}
return 0;
}