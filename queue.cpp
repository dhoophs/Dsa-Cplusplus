#include<iostream>
#include<queue>
using namespace std;

class queue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue{
        size=10000;
        arr= new int[size];
        front=0;
        rear=0;
    }
    
    bool isEmpty(){
        if (front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void Enqueue(int data){
        if(rear==size-1){
            cout<<"Queue is full";
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

}