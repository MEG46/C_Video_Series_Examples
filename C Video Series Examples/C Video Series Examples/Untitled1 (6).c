#include <stdio.h>
int deli(char *str, char ch){
    int num=0;
    char *ptr=str;
    while(*ptr!='\0'){
        if(*ptr==ch){
            num+=1;
        }
        ptr++;
    }
    return num;
}
int main() {
    char *ad="Dimensional Arrays";
    char ch;
    int num1=0;
    printf("Enter a char : ");
    scanf("%c",&ch);
    int sonuc = deli(ad,ch);
    printf("%s has %d times %c\n",ad,sonuc,ch);

    return 0;
}