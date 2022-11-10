#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void findN(int ar[], int num){
	ar[num];
	int i;
	int sum=0;
	for(i=0;i<num-1;i++){
	    sum= sum+ar[i];	
    }
    printf("Average of sum : %.2lf\n",(float)sum/num);
}
void findN1(int ar[], int num){
	ar[num];
	int i;
	int sum=0;
	for(i=0;i<num-1;i++){
		sum= sum+ar[i];
    }
    printf("Sum : %d\n",sum);
}
int sum1(void (*ptr)(int[],int),int ar[],int a){
          ptr(ar,a);
}
int main(){
	int arr[20];
	int c;
	srand(time(NULL));
	for(c=0;c<20;c++){
		arr[c]=rand()%20;
	}
	for(c=0;c<20;c++){
		printf("%d\t",arr[c]);
	}
	printf("\n");
	findN1(arr,20);
	findN(arr,20);
	return 0;
}