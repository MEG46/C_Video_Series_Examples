#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void whoB(char ar[]){
	char reverse[20];
	int j=0;
	int i=0;
	while(ar[i]!='\0'){
		i++;
	}
		while(ar[i-1-j]!='\0'){
		reverse[j]=ar[i-1-j];
		j++;
	}
	printf("Normal : %s\n",ar);
	printf("Reverse : %s\n",reverse);    
}
void sum1(void (*ptr)(char[]),char ar[]){
          ptr(ar);
}
int main(){
	char arr[20];
	printf("Enter a character : ");
	scanf("%s",arr);
	fflush(stdin);
	whoB(arr);
	return 0;
}