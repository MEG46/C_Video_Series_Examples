#include <stdio.h>
void fill(char *str, char c,int *num){
	char *ptr=str;
	while(*ptr!='\0'){
		if(*ptr==c){
			*num+=1;
		}
		ptr++;
	}
}
int main(){
	char ch;
	char *ds="Love You Dad!";
	int num=0;
	printf("Enter a char : ");
	scanf("%c",&ch);
	fflush(stdin);
	fill(ds,ch,&num);
	printf("Your array has %d %c.",num,ch);
	return 0;
}