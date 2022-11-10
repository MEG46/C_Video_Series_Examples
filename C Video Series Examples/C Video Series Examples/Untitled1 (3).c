#include <stdio.h>
#include <string.h>
void fill(char *str, char *str1){
	char *ptr=str;
	
	while(*ptr){
	    
		ptr++;
	
	}
	char *ptr1=str1;
	while(*ptr1){
	    *ptr=*ptr1;
		ptr++;
		ptr1++;
	
	}
    *ptr1='\0';
}

int main(){
	char ds[]="Love You Dad!";
	char ds1[]="Love You Dad!";
	fill(ds,ds1);
	printf("%s",ds);
	return 0;
}