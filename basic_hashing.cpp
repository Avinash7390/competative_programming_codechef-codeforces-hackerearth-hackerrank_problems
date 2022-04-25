#include<iostream>
using namespace std;
int main(){
    int arr[20]={1,0,0,0,3,16,22,20,12,12,0,1,2,2,1,0,4,4,5,1};
    int b[22]{0};
    for(int i=0;i<20;i++){
        b[arr[i]]++;
    }
    cout<<"frequency of 1: "<<b[1]<<endl;
    cout<<"frequency of 0: "<<b[0]<<endl;
    return 0;
}