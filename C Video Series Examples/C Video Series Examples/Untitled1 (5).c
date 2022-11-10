#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int *dizi, int num){
    srand(time(NULL));
    int *ptr;
    for(ptr=dizi;ptr<dizi+num;ptr++){
        *ptr=rand()%30;
    }
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
   fill(arr,10);
   fill1(arr,10);

    return 0;
}