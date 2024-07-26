#include<iostream>
using namespace std;

void sortArr(int arr[], int n){
    int i=0; int j=n-1;
    while(i<j){
        while(i==0 && i<j){
            i++;
        }
        while(j==1 && i<j){
            j--;
        }
        if(i<j)
        swap(arr[i],arr[j]);
        i++;
        j--;
        
    }
}

int main(){
    int arr[6]={1,0,1,1,0,0};
    sortArr(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}