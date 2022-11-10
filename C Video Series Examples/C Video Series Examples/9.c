#include <stdio.h>
int main(){
	int satir;
	int sutun;
	printf("Please enter a number : ");
	scanf("%d",&satir);
	printf("Please enter a number : ");
	scanf("%d",&sutun);
	int arr[satir][sutun];
	int i,j;
	int k,l;
	int d=satir;
	int e=sutun;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		    printf("Please enter an element : ");
			scanf("%d",&arr[i][j]); 
	    }
	}
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		    if(arr[i][j]!=arr[j][i]){
		    	for(k=0;k<d;k++){
		    		for(l=0;l<e;l++){
		    		    printf("%d\t",arr[k][l]);
				}
				printf("\n");
			}
		    	printf("This array is not simetric array!\n");
		    	return 0;
			}
	    }
	}
	printf("This array is simetric array!\n");
	for(k=0;k<d;k++){
		for(l=0;l<e;l++){
		    	printf("%d\t",arr[k][l]);
		}
		printf("\n");
	}
	return 0;
}