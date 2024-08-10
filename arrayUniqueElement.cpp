#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Array size and elements of it"<<endl;
    int n ; int i;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++){
        cin>>arr[i];  }

    int ans=0;
    for (i=0;i<n;i++){
        ans=ans^arr[i];
    }

    cout<<"Unique element is:"<<ans<<endl;

}