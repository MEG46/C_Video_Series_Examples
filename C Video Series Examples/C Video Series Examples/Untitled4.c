#include <stdio.h>
void fill(char *str){
	char *ptr=str;
	int num=0;
	while(*ptr!='\0'){
		if(*ptr==' '){
			num--;
		}
        num++;
		ptr++;
	}

	printf("girdiginiz sayı %d adet bosluk icermekterdir.\n",num);
}
int main(){
	char *as="How I Met Your Mother";
	fill(as);
	return 0;
}