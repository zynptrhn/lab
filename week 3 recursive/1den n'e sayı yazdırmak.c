//1 den n'ye kadar say�lar� yazd�ran rek�rsif fonksiyon
#include <stdio.h>
int yazdir(int);
int main(){
 int n;
 printf("hangi sayiya kadar yazilsin:");
 scanf("%d",&n);
  yazdir(n);
  return 0;
}

int yazdir(int x){
 if(x==0)
 return 0;
 yazdir(x-1);
 printf("%d\n",x);
}


