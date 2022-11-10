#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void findN(int ar[], int num){
	ar[num];
	int i;
	int l=0;
	while(l<num){
	for(i=0;i<num-1;i++){
		if(ar[i]<=ar[i+1]){
			int gec=ar[i];
			ar[i]=ar[i+1];
			ar[i+1]=gec;
		}
	}
	l++;
    }
    printf("Biggest Number : %d\n",ar[num-1]);
}
void findN1(int ar[], int num){
	ar[num];
	int i;
	int l=0;
	while(l<num){
	for(i=0;i<num-1;i++){
		if(ar[i]>=ar[i+1]){
			int gec=ar[i];
			ar[i]=ar[i+1];
			ar[i+1]=gec;
		}
	}
	l++;
    }
    printf("Smallest Number : %d\n",ar[num-1]);
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
	findN(arr,20);
	findN1(arr,20);
	return 0;
}