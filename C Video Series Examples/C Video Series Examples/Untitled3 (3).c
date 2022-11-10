#include <stdio.h>
void hey(){
    printf("Merhaba Dunya !");
}
void hey1(){
    printf("Hello World !");
}void hey2(){
    printf("Hallo Welt !");
}
void cont(void (*FonkPtr[3])()){
    int num;
   if(num==0){
       (*FonkPtr[0])();
   }else if(num==1){
       (*FonkPtr[1])();
   }else if(num==2){
       (*FonkPtr[2])();
   }
}
int main(){
    void (*FonkPtr[3])(void);
    FonkPtr[0]=hey;
    FonkPtr[1]=hey1;
    FonkPtr[2]=hey2;
    int i;
    for(i=0;i<3;i++){
    (*FonkPtr[i])();
    }
    return 0;
}
