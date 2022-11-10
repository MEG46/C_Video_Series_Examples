#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int i,j = 0;
    int d;
    int k=0;
    printf("Enter the length of array : ");
    scanf("%d",&d);
    int array[d];
    for(i=0;i<d;i++){
                     printf("Enter a number : ");
                     scanf("%d",&array[i]);
                     }
   i=i-1;
   for(i=d-1;i>=0;i--){
                     array[i]=array[i];
                     }
    for(j=0;j<d;j++){
                     printf(" Element = %d\n",array[j]);
    }
    }
    return 0;
    getch();
}
