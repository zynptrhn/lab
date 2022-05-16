#include <stdio.h>
int main(){
int i;
char a[100];
char *aptr;


	printf("uzunlugu hesaplanacak string girin:");
	gets(a);
	int uzunluk=0;
 	aptr=a;

	for(i=0; a[i]!='\0'; i++){
	uzunluk++;
	}
	printf("string uzunlugu: %d",uzunluk);
return 0;
}
