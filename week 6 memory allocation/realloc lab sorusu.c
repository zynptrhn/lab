#include <stdio.h>
#include <stdlib.h>


int main(){
    int *pt;
	int i,n,k;
	printf("How many numbers\n");
	scanf("%d",&n);
	
	pt=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++){
		scanf("%d",pt+i);
		
	}
	printf("diziye ne kadar alan eklensin:");
	scanf("%d",&k);
	
	pt=(int *)realloc(pt,sizeof(int)*(n+k));
	
	for(i=n;i<n+k;i++){
		scanf("%d",pt+i);
	}
	for(i=0;i<n+k;i++){
		printf("%d  ",*(pt+i));
	}
	
return 0;
}
