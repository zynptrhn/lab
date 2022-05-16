#include <stdio.h>
#include <stdlib.h>
void func(int a, int *tek, char *cift){
	int x, k=0, m=0, i;
	while(a>0){
		x=a%10;
		
		if(x%2==0){
			*(cift+k)=x;
			k++;
			cift=(char*)realloc(cift,k*sizeof(char));
		}
		
	    else{
	    	*(tek+m)=x;
	    	m++;
	    	tek=(int*)realloc(tek,m*sizeof(int));
		}
		a=a/10;
	}
	for(i=0;i<k; i++){
		printf("%d",*(cift+i));
	}
	for(i=0; i<m; i++){
		printf("%d",*(tek+i));
	}
}
