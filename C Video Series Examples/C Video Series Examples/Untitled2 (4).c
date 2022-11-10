#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int *dizi, int num){
    srand(time(NULL));
    int *ptr=dizi;
    int *result;
    int c=num;
    int s=0;
    for(ptr=dizi;ptr<dizi+num;ptr++){
        *ptr=rand()%30;
    }
    
}
void fill2(int *dizi,int num,int *sum, float *avg){
    srand(time(NULL));
    int *ptr=dizi;
    for(ptr=dizi;ptr<dizi+num;ptr++){
        *sum+=*ptr;
    }
    *avg=*sum/10.00;
    
}
void fill1(int *dizi, int num){
    srand(time(NULL));
    int *ptr;
    for(ptr=dizi;ptr<dizi+num;ptr++){
        printf("%d ",*ptr);
    }
}
int main()
{
   int arr[10];
   int max,min;
   int sum=0;
   float avg=0;
   fill(arr,10);
   fill2(arr,10,&sum,&avg);
   fill1(arr,10);

   printf("\nSum of array : %d\n",sum);
   printf("Average of array : %.2lf ",avg);
   return 0;
}