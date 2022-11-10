#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int *arr,int num){
	srand(time(NULL));
	int *ptr;
	for(ptr=arr;ptr<arr+num;ptr++){
		*ptr=rand()%100;
	}
}
void fill1(int *arr,int num){
	srand(time(NULL));
	int *ptr;
	for(ptr=arr;ptr<arr+num;ptr++){
		printf("%d ",*ptr);
	}
	printf("\n");
	for(ptr=arr+num-1;arr<=ptr;ptr--){
		printf("%d ",*ptr);
	}
}
int main(){
	int ar[10];
	fill(ar,10);
	fill1(ar,10);
	return 0;
}