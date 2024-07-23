#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter number to see no. of prime in b/w"<<endl;
    cin>>n;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2; i<n; i++){
        if (prime[i]){
            cout<<i<<" ";
            count++;
        for(int j=2*i;j<n;j=j+i){
            prime[j]=0;
        }
        }
    }
    cout << "Number of primes between 2 and " << n << " are: " << count << endl;
    return 0;
}
//time complexity=n//