#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
   int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count;
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}