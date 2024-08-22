#include<iostream>
#include<stack>
using namespace std;

void solveit(stack <int> &s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    solveit(s,x);
    s.push(num);

}

void printS(stack <int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    cout<<"Enter element to push down of the stack"<<endl;
    int x;
    cin>>x;
    stack <int> s;
    s.push(10); s.push(11); s.push(12); s.push(13);
    solveit(s, x);
    cout<<endl;
    printS(s);
    return 0;
}