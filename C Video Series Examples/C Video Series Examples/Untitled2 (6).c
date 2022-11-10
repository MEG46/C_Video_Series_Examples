#include <stdio.h>
#include <string.h>
int main(){
	int i=0;
	int j;
	char arr[20];
	char arr1[20];
	int lin[26]={0};
	int lin1[26]={0};
	int d;
	int flag=0;
	printf("Please enter a character : ");
	scanf("%s",arr);
	printf("Please enter a character : ");
	scanf("%s",arr1);
	int len1=strlen(arr);
	int len2=strlen(arr1);
	int c=len1;
	if(len1!=len2){
		printf("%s and %s are not anagram each other.\n",arr,arr1);
		return 0;
	}
while(lin[i]!='\0'){
	lin[arr[i]-'a']++;
    i++;
}
while(lin1[j]!='\0'){
	lin1[arr1[j]-'a']++;
    j++;
}
for(d=0;d<26;d++){
	if(lin[d]!=lin1[d]){
		flag=1;
		printf("%s and %s are not anagram each other.\n",arr,arr1);
		return 0;
	}
		
	}
		printf("%s and %s are anagram each other.\n",arr,arr1);
		return 0;
}
