#include <stdio.h>
#include <strings.h>
void fill(char *str){
	int num = strlen(str);
	char *ptr=str+num-1;
	while(ptr>=str){
		printf("%c",*ptr);
		ptr--;
	}
}
int main(){
	char *as="How I Met Your Mother";
	fill(as);
	return 0;
}