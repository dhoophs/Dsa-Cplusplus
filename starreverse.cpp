#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    int count=n;
    while(i<=n){
        int j=1;
        while(j<=count){
            cout<<'*';
            j+=1;
        }
        cout<<endl;
        count-=1;
        i+=1;
    }
}