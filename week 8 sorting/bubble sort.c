#include <stdio.h>
#define N 5

int main(){
    int A[N]={37,34,5,0,12};

    int i,j,temp;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(A[j+1]<A[j]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }

        }
    }
    for(i=0;i<N;i++){
        printf("%d\t",A[i]);
    }
 return 0;
}
