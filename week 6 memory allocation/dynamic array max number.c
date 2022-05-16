#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,n;
	int *ptr;
	printf("kac elemanli:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("elemanlari girin:\n");
	for(i=0; i<n; i++){
		scanf("%d",ptr+i);
	}
	for(i=1; i<n; i++){
		if(*ptr<*(ptr+i))
		*ptr=*(ptr+i);
	}
	printf("max eleman: %d",*ptr);
	free(ptr);
	return 0;
}
