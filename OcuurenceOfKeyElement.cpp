#include<iostream>
using namespace std;

int OccS(int a[], int n, int key){
    int s=0; int e=n-1;
    int mid=(s+e)/2;
    int ans=0;
    while(s<=e){
        if (a[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>a[mid]){
            s=mid+1;
        }
        else if(key<a[mid]){
            e=mid-1;
        }

       mid=(s+e)/2; 
    }
    return ans;

}

int OccE(int a[], int n, int key){
    int s=0; int e=n-1;
    int mid=(s+e)/2;
    int ans=0;
    while(s<=e){
        if (a[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>a[mid]){
            s=mid+1;
        }
        else if(key<a[mid]){
            e=mid-1;
        }

       mid=(s+e)/2; 
    }
    return ans;

}

int main(){
    int arr[8]={1,2,3,3,3,3,5,6};
    int S = OccS(arr,8,3);
    int E = OccE(arr,8,3);
    cout<<"First Occurence is at:"<<S<<endl;
    cout<<"Second Occurence is at:"<<E<<endl;
    cout<<"No. of occurence is :"<<(E-S+1)<<endl;
    return 0;
}