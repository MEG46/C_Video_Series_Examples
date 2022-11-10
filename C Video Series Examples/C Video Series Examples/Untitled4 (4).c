#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void whoB(char ar[], char ar1[]){
	int j=0;
	int i=0;
	while(ar[i]!='\0'){
		i++;
	}
		while(ar1[j]!='\0'){
		j++;
	}
	if(i==j){
		printf("%s\t %s\t",ar,ar1);
		printf("\n");
		printf("%d = %d\n",i,j);
		printf("Both Strings have same numbers of character!");
	}else if(i>j){
		printf("%s\t %s\t",ar,ar1);
		printf("\n");
		printf("%d > %d\n",i,j);
		printf("First string has bigger numbers of character than second string!");
	}else if(i<j){
		printf("%s\t %s\t",ar1,ar);
		printf("\n");
		printf("%d > %d\n",j,i);
		printf("Second string has bigger numbers of character than first string!");
	}else{
		printf("Invalid Process!");
	}
    
}
void sum1(void (*ptr)(char[],char[]),char ar[],char ar1[]){
          ptr(ar,ar1);
}
int main(){
	char arr[20];
	char arr1[20];
	printf("Enter a character : ");
	scanf("%s",arr);
	fflush(stdin);
	printf("Enter a character : ");
	scanf("%s",arr1);
	fflush(stdin);
	whoB(arr,arr1);
	return 0;
}