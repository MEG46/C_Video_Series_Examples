#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int i,j = 0;
    int d;
    printf("Enter the length of array : ");
    scanf("%d",&d);
    int array[d];
    for(i=0;i<d;i++){
                     printf("Enter a number : ");
                     scanf("%d",&array[i]);
                     }
                     printf(" Element : ");
    for(j=0;j<d;j++){
                     printf(" %d",array[j]);
    }
    printf(" \n");
    }
    return 0;
    getch();
}
