#include<iostream>
using namespace std;

bool ifsort(int a[],int n){
    if(n==0||n==1){
        return 1;
    }
    if(a[0]>a[1]){
        return 0;
    }
    else{
        ifsort(a+1,n-1);
        return a;
    }
}

int main(){
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=ifsort(arr,n);
    if (ans==0){
        cout<<"Not Sorted\n";
    }
    else{
        cout<<"Sorted\n";
    }
    
    return 0;

}