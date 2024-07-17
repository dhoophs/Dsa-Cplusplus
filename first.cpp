#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"hi i am D"<< endl;
    cin>>a;
    if (a>90 && a<=100){
        cout<<"A"<< endl;
    }
    if (a>75 && a<90){
        cout<<"B"<<endl;
    }
    if (a>50 && a<75){
        cout<<"C"<<endl;
    }
    if (a<50){
        cout<<"F"<<endl;
    }
    
}