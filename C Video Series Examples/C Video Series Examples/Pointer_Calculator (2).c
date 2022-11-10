#include <stdio.h>
void math1(int a, int b){
	printf("%d + %d = %d\n",a,b,(a+b));
}
void math2(int a, int b){
	printf("%d - %d = %d\n",a,b,(a-b));
}
void math3(int a, int b){
	printf("%d * %d = %d\n",a,b,(a*b));
}
void math4(int a, int b){
	printf("%d / %d = %d\n",a,b,(a/b));
}
void math5(int a, int b){
	printf("%d % %d = %d\n",a,b,(a%b));
}
int main(){
	char c;
	void (*fonkPtr[5])(int,int);
	int num,num1;
	printf("Enter a number : ");
	scanf("%d",&num);
	fflush(stdin);
	printf("Enter a process : ");
	scanf("%c",&c);
	fflush(stdin);
	printf("Enter a number : ");
	scanf("%d",&num1);
	fflush(stdin);
	fonkPtr[0]=math1;
	fonkPtr[1]=math2;
	fonkPtr[2]=math3;
	fonkPtr[3]=math4;
	fonkPtr[4]=math4;
	if(c=='+'){
		(*fonkPtr[0])(num,num1);
		
	}else if(c=='-'){
		(*fonkPtr[1])(num,num1);
		
	}else if(c=='*'){
		(*fonkPtr[2])(num,num1);
		
	}else if(c=='/'){
		(*fonkPtr[3])(num,num1);
		
	}else if(c=='%'){
		(*fonkPtr[4])(num,num1);
		
	}else{
		printf("Invalid Process! Please try again !");
	}
		
	
return 0;
}