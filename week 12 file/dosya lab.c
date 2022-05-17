 #include <stdio.h>
 #include <string.h>
 int number;
 char isim[40];
 char bolum[40];
 
 void dosya_olustur(FILE* myptr);
 void ara(FILE* myptr);
 void kayit_ekle(FILE* myptr);
 void yazdir(FILE* myptr);

int main(){
	FILE* myptr;
	int secim;
	printf("Yapilacak islemi girin:\n");
	printf("1.dosya olusturma\n 2.isim arama\n 3.yeni kayit ekleme\n 4.yazdirma\n 5.cikis");
	printf("\n");
	scanf("%d",&secim);
	
	while(secim!=5){
		switch(secim){
			case 1: dosya_olustur(myptr);break;
			case 2: ara(myptr);break;
			case 3: kayit_ekle(myptr);break;
			case 4: yazdir(myptr);break;
			case 5: break;
		}
		printf("yapilacak islemi girin: \n");
		scanf("%d",&secim);
	}
	return 0;
	
  }
  
  void dosya_olustur(FILE* myptr){
  	int i, n;
  	printf("liste kac ogrenci icin olusturulsun? :");
  	scanf("%d",&n);
  	myptr=fopen("student.txt","w");
  	if(myptr==NULL)
  		printf("dosya acilamadi.");
  	else{
  		printf("ogrenci no,isim,bolum:\n");
  	    printf(">> ");
  	    for(i=0; i<n; i++){
  	    	scanf("%d%s%s",&number,isim,bolum);
  	    	printf(">> ");
  	    	fprintf(myptr,"%d%s%s",number,isim,bolum);
		  }
  	
	fclose(myptr);  }
  }
  
void ara(FILE* myptr){
	char aranan[40];
	printf("aranacak ismi girin: ");
	scanf("%s",aranan);
	myptr=fopen("student.txt","r");
	if(myptr==NULL)
		printf("dosya acilamadi.");
	else{
		fscanf(myptr,"%d%s%s",&number,isim,bolum);
		while(!feof(myptr)){
			if(strcmp(isim,aranan)!=0){
			
				printf("ogrenci:\n");
				printf("%d%s%s",number,isim,bolum);
				}
	    fscanf(myptr,"%d%s%s",number,isim,bolum);	
		}
	fclose(myptr);    
	}
	
}

void kayit_ekle(FILE *myptr){
	int i,n;
	printf("kac kisi eklenecek:");
	scanf("%d",&n);
	myptr=fopen("student.txt","a+");
	if(myptr==NULL)
		printf("dosya acilamadi");
	else{
		printf("isim numara ve bolum girin:");
		printf(">> ");
		for(i=0;i<n;i++){
			scanf("%d%s%s",&number,isim,bolum);
			fprintf(myptr,"%d%s%s",number,isim,bolum);
		}
	fclose(myptr);
	}
}

void yazdir(FILE* myptr){
	myptr=fopen("student.txt","r");
	if(myptr==NULL)
		printf("dosya acilamadi.");
	else{
	      fscanf(myptr,"%d%s%s",number,isim,bolum);
	
	while(!feof(myptr)){
		printf("%5d %5s %5s",number,isim,bolum);
		fscanf(myptr,"%d%s%s",&number,isim,bolum);
	   }
	   fclose(myptr);
         }
                     }
       


