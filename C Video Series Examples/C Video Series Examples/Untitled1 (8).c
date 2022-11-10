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
int sum1(void (*ptr)(int, int),int a, int b){
          ptr(a,b);
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
	if(c=='+'){
		sum1(math1,num,num1);
		
	}else if(c=='-'){
		sum1(math2,num,num1);
		
	}else if(c=='*'){
		sum1(math3,num,num1);
		
	}else if(c=='/'){
		sum1(math4,num,num1);
		
	}else if(c=='%'){
		sum1(math5,num,num1);
		
	}else{
		printf("Invalid Process! Please try again !");
	}
		
	
return 0;
}