
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int i,n;
	char a[20];
	
	printf("Write length of your name and surname: \n");
	scanf("%d", &n);
	
	printf("Write your name\n");
	
	for(i=0; i<=n; i++)
		scanf("%c", &a[i]);
	
	char *name=(char*)malloc(n+1*sizeof(char));
	
	strcpy(name,a);
	
	for(i=0; i<=n+1; i++)
		printf("%c", *(name+i));
	
	
	
	return 0;
}
