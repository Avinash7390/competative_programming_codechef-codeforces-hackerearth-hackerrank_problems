 #include<iostream>
 using namespace std;
int main(){
     int A[10]={6,9,34,56,78,90,100,110,122,134};
    int l=0,h=9,key,mid;
    cout<<"Enter the key element: ";
    cin>>key;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid]){
            cout<<"Element is found at position : "<<mid;
            return 0;
        }
        else if(key>A[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    cout<<"Element is not found";
    return 0;
}