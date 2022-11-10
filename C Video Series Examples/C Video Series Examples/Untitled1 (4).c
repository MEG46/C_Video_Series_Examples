#include <stdio.h>
#include <string.h>
void fill(char *str, char *str1){
	char *ptr=str;
	char *ptr1=str1;
	int num=0;
	while(*ptr){
	    *ptr1=*ptr;
		ptr++;
		ptr1++;
	}
	
    *ptr1='\0';
}

int main(){
	char ds[]="Love You Dad!";
	char ds1[]="";
	fill(ds,ds1);
	printf("%s",ds1);
	return 0;
}