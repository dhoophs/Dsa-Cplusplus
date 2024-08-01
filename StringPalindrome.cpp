#include<iostream>
using namespace std;

char getLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';
        return temp;
    }
}

void ReturnLowerCase(char a[], int n){
    for (int i=0; i<n; i++){
        a[i]=getLowerCase(a[i]);
    }
    
}

int getLength(char a[]){
    int count=0;
    for (int i=0; a[i]!=0; i++){
        count++;
    }
    return count;
}

bool checkpal(char a[], int n){
    int s=0; int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return false;
        }
        else{
            s++; 
            e--;
        }
    }
    return true;
}

int main(){
    char pal[20];
    cout<<"Enter word"<<endl;
    cin>>pal;
    int len = getLength(pal);
    cout<<"Length of string :"<<len<<endl;
    ReturnLowerCase(pal,len);
    cout<<"Palindrome or not :"<<checkpal(pal,len)<<endl;
    return 0;

}