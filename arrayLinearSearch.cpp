#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,11};
    cout<<"Enter element to be searched"<<endl;
    int key;
    cin>>key;
    bool found =search(a,10,key);
    if(found){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
    return 0;
}