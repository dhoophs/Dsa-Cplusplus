#include<iostream>
using namespace std;
void rev(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
    }

}
int main(){
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    int a[n];
    
    cout << "Enter " << n << " elements for the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i]; }

        cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    rev(a, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;

}