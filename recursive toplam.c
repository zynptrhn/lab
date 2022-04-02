//main fonksiyonu icerisinde verilen bir sayiya kadar olan sayilarin toplamini bulan rekürsif fonksiyon
#include <stdio.h>
int toplambul(int);

int main(){
 int a;
 printf("bir sayi girin:");
 scanf("%d",&a);
 printf("1den %d ye kadar sayilarin toplami: %d",a,toplambul(a));
 return 0;
}

int toplambul(int x){
	static int i=1;
	static int toplam=0;
	if(i<=x){
		toplam=toplam+i;
		i++;
		toplambul(x);
	}
	return toplam;
}
