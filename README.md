#include<iostream>
using namespace std;
void armstrong(int n);
int main(){
    int n;
    cin>>n;
    armstrong(n);
    return 0;
}
void armstrong(int number){
    int digit,sum=0;
    int original_num=number;
    while(number!=0){
        digit=number%10;
        sum+=digit*digit*digit;
        number=number/10;
    }
    if(sum==original_num){
        cout<<"this is an armstrong no";
    }
    else{
        cout<<"this is not an armstrong no.";
    }
}
