#include<stdio.h>
int main(){
    int K,T,N;
    scanf("%d",&T);
    while(T>0){
        scanf("%d %d",&N,&K);
        int A[N];
        for(int i=0;i<N;i++){
            scanf("%d",&A[i]);

        }
        for(int i=0;i<N;i++){
            if(K>=A[i]){
                printf("1");
                K=K-A[i];
            }
            else{
                printf("0");
            }
        }
        T--;
    }
    return 0;
}