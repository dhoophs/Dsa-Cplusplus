#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int s=0; int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid+1]>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
       mid=(s+e)/2; 
    }
    return arr[mid];
}

int main(){
    int arr[7]={1,2,4,6,9,6,3};
    int PeakElement = peak(arr,7);
    cout<<"Peak element is:"<<PeakElement<<endl;
}