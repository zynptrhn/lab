#include <stdio.h>
#include <stdlib.h>
int maxbul(int [],int);

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("maximum sayi: %d",maxbul(a,10));
	return 0;
}
  
  
int maxbul(int dizi[],int n){
 static int i=0;
 static	int max=1;
 	if(i<n){
 		if(max<dizi[i]){
 			max=dizi[i];
		}
	i++; 
	maxbul(dizi,n);
	}
 return max;
}
