#include<iostream>
using namespace std;

void printar3r(int arr[],int size ){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Determine the array size"<<endl;
    cin>>n;
    int a[n];
    int i=0;
    cout<<"Enter elements of array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
        
    }
    printar3r(a,n);
}