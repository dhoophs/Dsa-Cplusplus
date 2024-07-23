#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    int sum=0;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
        else{
            continue;
        }
    }
    cout<<"The sum of even no in b/w the given no is : "<< sum <<endl;
}