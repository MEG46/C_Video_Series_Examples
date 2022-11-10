#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void findNum(int ar[],int d){
	int i;
	int g;
	for(i=0;i<d-1;i++){
		for(i=0;i<d-1;i++){
		if(ar[i]>ar[i+1]){
			g=ar[i+1];
			ar[i+1]=ar[i];
			ar[i]=g;
			
		}
	}
	}
	printf("%d",ar[9]);
	return;
}
void findNum1(int ar[],int d){
	int i;
	int g;
	for(i=0;i<d-1;i++){
		for(i=0;i<d-1;i++){
		if(ar[i]<ar[i+1]){
			g=ar[i+1];
			ar[i+1]=ar[i];
			ar[i]=g;
			
		}
	}
	}
	printf("%d",ar[9]);
	return;
}
int main(){
    srand(time(NULL));
    int array[10];
    int i;
    for(i=0;i<10;i++){
    	array[i]=rand()%20;
	}
	printf("Array : ");
	 for(i=0;i<10;i++){
    	printf("%d ",array[i]);
	}
	printf("\n");
	printf("Biggest Number : ");
	findNum(array,10);
	printf("\n");
	printf("Smallest Number : ");
	findNum1(array,10);
	return 0;
}
