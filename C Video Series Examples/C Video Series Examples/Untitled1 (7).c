#include <stdio.h>
int deli(char *str, char as,char as1){
    int num=0;
    char *ptr=str;
    while(*ptr!='\0'){
        if(*ptr==as){
            *ptr=as1;
            num+=1;
        }
        ptr++;
    }
    return num;
}
int main() {
    char ad[]="Dimensional Arrays";
    char ch;
    char ch1;
    int num1=0;
    printf("Enter a char : ");
    scanf("%c",&ch);
    fflush(stdin);
    int sonuc = deli(ad,ch,'*');
    fflush(stdin);
    printf("%s has %d times %c\n",ad,sonuc,ch);

    return 0;
}
