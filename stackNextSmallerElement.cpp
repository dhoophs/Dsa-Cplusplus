#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector <int> nextSmallerEle(vector <int> &arr, int n){
    stack <int> s;
    s.push(-1);
    vector <int> ans(n);

    for(int i=0; i>=0; i++){
        int curr=arr[i];
        while(s.top()>= curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}

int main(){
    vector <int> v = {12,2,55,32,1,19};
    
    return 0;
}


