#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int array[5];
    int i;
    int j,k = 0;
    int counter=0;
    int counter1=0;
    int counter2=0;
    int ar[5];
    int ar1[5];
    for(i=0;i<5;i++){
                     printf("Enter a number : ");
                     scanf("%d",&array[i]);
                     }
    while(counter<5){
                                if(array[counter]%2==0){
                                                  ar[j]=array[counter];
                                                  
                                }else{
                                       ar1[k]=array[counter];
                                }
                                j++;
                                k++;
                                counter++;
                                }
                                for(counter1=0;counter1<j;counter1++){
                                                 printf(" %d",ar[counter1]);
                                                 counter1++;
                                }
                                for(counter2=0;counter2<k;counter2++){
                                                  printf(" %d",ar1[counter2]);
                                                  counter2++;
                                }
    }
    return 0;
    getch();
}
