#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char array[20];
	char reverse[20];
	int i,j;
	printf("Enter a character : ");
	scanf("%s",array);
	int number = strlen(array);
	for(i=0;i<number;i++){
		if(tolower(array[i])==array[i]){
			reverse[i]=toupper(array[i]);
		}
		if(toupper(array[i])==array[i]){
			reverse[i]=tolower(array[i]);
		}
	}
	printf("normal array : %s\n",array);
	printf("changed array : %s\n",reverse);
	return 0;
}