#include <stdio.h>
int fact(int num){
	if(num==1||num==0){
		return 1;
	}
	int result=num*fact(num-1);;
	
	return result;
}
int main(){
	int num1;
	printf("Enter a number : ");
	scanf("%d",&num1);
	printf("%d",fact(num1));
}