#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start=0; int end=n-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            start=mid+1;
        }

        else{
            end=mid-1;
        }

        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};
    int EvenIndex = BinarySearch(even,6,10);
    cout<<"Index of 10 is :"<<EvenIndex<<endl;
    int OddIndex = BinarySearch(odd,5,5);
    cout<<"Index of 5 is :"<<OddIndex<<endl;
    return 0;

}