#include <stdio.h>
#include <string.h>
void fill(char *str, char *str1){
	char *ptr=str;
	char *ptr1=str1;
	while(*ptr!='\0'&&*ptr1!='\0'){
		if(*ptr!=*ptr1){
			printf("Not same");
			break;
		}
		if(*ptr==*ptr1){
		
		ptr++;
		ptr1++;
	}
	}
	if(strlen(ptr)==strlen(ptr1)){
			printf("Same");
	}
}

int main(){
	char *ds="Love You Dad!";
	char *ds1="Love You Dad!";
	int num=0;
	int num1=0;
	fill(ds,ds1);
	return 0;
}