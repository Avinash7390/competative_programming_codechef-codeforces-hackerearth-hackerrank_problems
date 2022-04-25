#include<stdio.h>
int main(){
    int T,arr[6];
    while(T>0){
        for(int i=0;i<6;i++){
            scanf("%d",&arr[i]);
        }
        if((arr[0]==arr[2]&&arr[1]==arr[3])||(arr[0]==arr[3]&&arr[1]==arr[2])){
            printf("1");

        }else if((arr[0]==arr[4]&&arr[1]==arr[5])||(arr[0]==arr[5]&&arr[1]==arr[4])){
            printf("2");
        }else{
            printf("0");
        }
        printf("\n");
    }
    return 0;
}