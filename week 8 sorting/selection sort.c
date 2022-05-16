#include <stdio.h>
#define N 5
int main(){
    int A[N]={37,34,5,0,12};

    int i,j;
    int index,enkucuk;
    for(i=0;i<N-1;i++){
        enkucuk=A[N-1];
        index=N-1;
        for(j=i;j<N-1;j++){
           if(A[j]<enkucuk){
               enkucuk=A[j];
               index=j;
           }
        }
        A[index]=A[i];
        A[i]=enkucuk;
    }

    for(i=0;i<N;i++){
        printf("%d\t",A[i]);
    }
    return 0;
}
