#include<iostream>
#include<stack>
using namespace std;

int main(){
    cout<<"Write a word to reverse"<<endl;
    string s ="";
    cin>>s;
    stack <char> d;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        d.push(ch);
    }

    string ans="";

    while(!d.empty()){
        char ch = d.top();
        ans.push_back(ch);
        d.pop();
    }

    cout<<"Answer is :"<<ans<<endl;
    return 0;
}