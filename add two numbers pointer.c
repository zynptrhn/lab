#include <stdio.h>
int main(){
 int num1,num2;
 int *ptr1;
 int *ptr2;
 
 ptr1=&num1;
 ptr2=&num2;
 printf("enter a number:");
 scanf("%d",&num1);
 printf("enter a number:");
 scanf("%d",&num2);
 
 int toplam= *ptr1 + *ptr2;
 printf("toplamlari: %d", toplam);
 
}
