#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int *arr,int num){
   srand(time(NULL));
   int i,j;
   for(i=0;i<num;i++){
   	         arr[i]=rand()%15;
        }
   }	
void find(int *arr,int num){
   srand(time(NULL));
   int i,j;
   int d=num;
    for(j=0;j<d;j++){
        for(i=0;i<num-1;i++){
   	         if(arr[i]<arr[i+1]){
   	         	int gec=arr[i+1];
   	         	arr[i+1]=arr[i];
   	         	arr[i]=gec;
				}
            }
        }	       
}
void find1(int *arr,int num){
   srand(time(NULL));
   int i,j;
   int d=num;
    for(j=0;j<d;j++){
        for(i=0;i<num-1;i++){
   	         if(arr[i]>arr[i+1]){
   	         	int gec=arr[i+1];
   	         	arr[i+1]=arr[i];
   	         	arr[i]=gec;
				}
            }
        }	       
}
void prin(int *arr,int num){
   srand(time(NULL));
   int i,j;
   for(i=0;i<num;i++){
   	         printf("%d\t",arr[i]);
        }
}	
int main(){
	int *ar;
	int num;
	printf("Please enter a number : ");
	scanf("%d",&num);
	ar=(int *)malloc(sizeof(int)*num);
	printf("\n--------------------------------\n\n");
	printf("\nBefore Sorting :\n\n");
	printf("\n--------------------------------\n\n");
	fill(ar,num);
	prin(ar,num);
	printf("\n--------------------------------\n\n");
	printf("\nAfter Sorting (From Bigger To Lower):\n\n");
	printf("\n--------------------------------\n\n");
	find(ar,num);
	prin(ar,num);
		printf("\n--------------------------------\n\n");
	printf("\nAfter Sorting (From Lower To Bigger):\n\n");
	printf("\n--------------------------------\n\n");
	find1(ar,num);
	prin(ar,num);
	free(ar);
	return 0;
	
}

