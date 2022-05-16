#include<stdio.h>
void basamakbul(int);

int main(){
 int a;
 printf("bir sayi girin:");
 scanf("%d",&a);
 basamakbul(a);
 return 0;
}

 void basamakbul(int x){
  	int b;
     if(x>0){
     	b=x%10;
     	printf("%d\n",b);
     	basamakbul(x/10);
	 }
	  } 

