#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int i,j = 0;
    int d;
    int k;
    printf("Enter the length of array : ");
    scanf("%d",&d);
    int array[d];
    for(i=0;i<d;i++){
                     printf("Enter a number : ");
                     scanf("%d",&array[i]);
                     }
    for(k=0;k<d;k++){
                     array[k]=array[i];
                     i--;
                     }
    for(j=0;j<k;j++){
                     printf(" Element %d = %d\n",j,array[j]);
    }
    }
    return 0;
    getch();
}
