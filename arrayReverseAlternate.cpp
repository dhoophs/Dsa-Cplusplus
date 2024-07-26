#include<iostream>
using namespace std;

void rev(int arr[],int n){
    int start=0;
    int end =1;
    while(start<n && end<n){
        swap(arr[start],arr[end]);
        start+= 2;
        end+= 2;
    }
    
}

int main(){
    int n=5;
    int a[5]={1,2,3,4,5};
    rev(a,5);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}