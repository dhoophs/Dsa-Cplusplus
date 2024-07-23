#include<iostream>
using namespace std;

void printArr(int arr[][3], int row, int col){
     for(int i=0; i<row; i++){
        for(int j=0 ;j<col ; j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }

}
int main(){
    int arrayd[3][3];
    cout<<"Enter elements"<<endl;
    
    for(int i=0; i<3; i++){
        for(int j=0 ;j<3; j++){
            
            cin>>arrayd[i][j];
         }
    }

  printArr(arrayd,3,3);
  return 0;

    
}