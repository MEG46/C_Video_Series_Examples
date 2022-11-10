#include <stdio.h>
void fill(char *str, int *num){
	char *ptr=str;
	while(*ptr!='\0'){
		if(*ptr==' '){
			*num+=1;
		}
		ptr++;
	}
}
int main(){
	char *as="How I Met Your Mother";
	int num=0;
	fill(as,&num);
	printf("girdiginiz sayı %d adet bosluk icermekterdir.\n",num);
	return 0;
}