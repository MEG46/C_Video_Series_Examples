#include <stdio.h>
void sum(int a , int b){
    int c= a+b;
    printf("%d + %d = %d\n",a,b,c);
    return;
}
void sub(int a , int b){
    int c= a-b;
    printf("%d - %d = %d\n",a,b,c);
    return;
}
void mult(int a , int b){
    int c= a*b;
    printf("%d + %d = %d\n",a,b,c);
    return;
}
void div(int a , int b){
    int c= a/b;
    printf("%d / %d = %d\n",a,b,c);
    return;
}
void mod(int a , int b){
    int c= a%b;
    printf("%d %% %d = %d\n",a,b,c);
    return;
}
int main(){
char ch;
void(*fonkPtr[5])(int,int);
int i;
int num1,num2;
int re=0;
printf("Enter a number : ");
scanf("%d",&num1);
fflush(stdin);

fflush(stdin);
printf("Enter a number : ");
scanf("%d",&num2);
printf("Enter a number : ");
scanf("%d",&re);
fflush(stdin);
fonkPtr[0]=sum;
fonkPtr[1]=sub;
fonkPtr[2]=mult;
fonkPtr[3]=div;
fonkPtr[4]=mod;
if(re==1){
   fonkPtr[0](num1,num2);
}else if(re==2){
   fonkPtr[1](num1,num2);
}else if(re==3){
   fonkPtr[2](num1,num2);
}else if(re==4){
   fonkPtr[3](num1,num2);
}else if(re==5){
   fonkPtr[4](num1,num2);
}else{
    printf("Invalid Process!\n");
}
return 0;
}
