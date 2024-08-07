#include<iostream>
using namespace std;
void printar3r(int arr[],int size ){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }



}
int main(){
    int a[5];
    int n =5;
    for (int i=0;i<n;i++){
        cout<<"give numbers for arr"<<endl;
        cin>>a[i];
        
    }
    printar3r(a,5);
}