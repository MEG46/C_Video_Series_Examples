#include <stdio.h>
#include <string.h>
int anagramkontrol(char *str, char *str1){
	int *arr,*arr1;
	char *ptr=str;
	char *ptr1=str1;
	int i;
    if(strlen(str)!=strlen(str1)){
    	return 0;
	}
	arr=(int *)calloc(26,sizeof(int));
	arr1=(int *)calloc(26,sizeof(int));
	while(*ptr!='\0'&&*ptr1!='\0'){
		int index=*ptr-'a';
		arr[index]+=1;
		index=*ptr1-'a';
		arr1[index]+=1;
		ptr++;
		ptr1++;
	}
	for(i=0;i<26;i++){
		if(arr[i]!=arr1[i])
		   return 0;
	
}
	return 1;
}
int main(){
	char size[20];
	char size1[20];
	printf("Please enter a char : ");
	scanf("%s",&size);
	printf("Please enter a char : ");
	scanf("%s",&size1);
	if(anagramkontrol(&size,&size1)){
		printf("%s and %s are anagram each other.\n",size,size1);
	}else{
		printf("%s and %s are not anagram each other.\n",size,size1);
	}
	return 0;
}

