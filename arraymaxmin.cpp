#include<iostream>
#include<climits>
using namespace std;

int maxi(int arr[],int n){
    int maxvalue =INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxvalue){
         maxvalue=arr[i];
        }
    }
    return maxvalue;

}

int mini(int arr[],int n){
    int minvalue =INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<minvalue){
         minvalue=arr[i];
        }
    }
    return minvalue;

}

int main(){
    int a[5];
    int n =5;
    for (int i=0;i<n;i++){
        cout<<"give numbers for arr"<<endl;
        cin>>a[i];
        
    }
    cout<<endl;
cout<<"Max value in this array is :"<<maxi(a,5)<<endl;
cout<<"Min value in this array is :"<<mini(a,5)<<endl;
    
}