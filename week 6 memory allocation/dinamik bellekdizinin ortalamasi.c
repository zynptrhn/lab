#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n;
	int *ptr;
	int toplam=0;
	printf("eleman say:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		scanf("%d",ptr+i);
		toplam+=*(ptr+i);
	}
	float ortalama=toplam/n;
	printf("ortalama: %f",ortalama);
	free(ptr);
	return 0;
}
