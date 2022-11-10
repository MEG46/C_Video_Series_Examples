#include <stdio.h>
void findChar(char arr[],int d){
	int i;
	int j=0;
	int counter=0;
	char ca[20];
	for(i=0;i<d;i++){
		if(arr[i]=='a'||arr[i]=='A'){
			ca[counter]=arr[i];
			counter++;
			
		}
		if(arr[i]=='e'||arr[i]=='E'){
			ca[counter]=arr[i];
			counter++;
			
		}
		if(arr[i]=='i'){
			ca[counter]=arr[i];
			counter++;
			
		}
		if(arr[i]=='u'){
			ca[counter]=arr[i];
			counter++;
			
		}
		if(arr[i]=='O'||arr[i]=='o'){
			ca[counter]=arr[i];
			counter++;
			
		}
	}
	printf("Char Number : %d\n",counter);
	printf("Chars : ");
    for(i=0;i<counter;i++){
		printf("%c ",ca[i]);
	}
	return;
}
int main(){
	char array[20];
	printf("Enter a character : ");
	scanf("%s",array);
	fflush(stdin);
	findChar(array,20);
	
}