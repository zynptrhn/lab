#include <stdio.h>
int main(){
int var=10;
int *p;
p=&var;

	printf("address of var is: %p\n",&var);
	printf("address of var is : %p\n",p);
	
	printf("value of var is: %d\n",var);
	printf("value of var is: %d\n", *p);
	printf("value of var is:%d\n", *(&var));
	
	printf("value of pointer p is: %p\n",p);
	printf("address of pointer p is: %p\n",&p);
	return 0;
}
