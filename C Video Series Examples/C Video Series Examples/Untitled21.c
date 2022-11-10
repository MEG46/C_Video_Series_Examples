#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int *arr,int num){
   srand(time(NULL));
   int i,j;
   for(i=0;i<num;i++){
   	         arr[i]=rand()%150;
        }
   }	
   
void prin(int *arr,int num){
   srand(time(NULL));
   int i,j;
   for(i=0;i<num;i++){
   	         printf("%d\t",arr[i]);
        }
}	
void find(int *arr,int num,int dsnum){
   srand(time(NULL));
   int i,j;
   int d=num;
    for(j=0;j<d;j++){
        for(i=0;i<num-1;i++){
   	         if(arr[i]==dsnum){
   	         	printf("\n\n\n%d is %d. element of the array.\n",dsnum,i);
   	         	return;
				}
            }
        }
    printf("\n\n\n%d is not involved in the array.\n",dsnum);  
	return;     
}
int main(){
	int *ar;
	int num,dsnum;
	printf("Please enter a number : ");
	scanf("%d",&num);
	ar=(int *)malloc(sizeof(int)*num);
	printf("\n--------------------------------\n\n");
	printf("\nArray :\n\n");
	printf("\n--------------------------------\n\n");
	fill(ar,num);
	prin(ar,num);
	printf("\n--------------------------------\n\n");
	printf("\nPlease enter the desired number : ");
	scanf("%d",&dsnum);
	find(ar,num,dsnum);
	printf("\n\n--------------------------------\n\n");
	prin(ar,num);
	printf("\n\n--------------------------------\n\n");
	free(ar);
    return 0;
}