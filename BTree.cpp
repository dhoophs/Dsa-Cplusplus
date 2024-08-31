#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this ->data = d;
        this ->left = NULL;
        this ->right = NULL;
 }
};

node* buildTree(node* root){
    cout<<"Enter data"<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    root= new node(data);

    cout<<"Enter data for inserting in left"<<endl;
    root->left= buildTree(root->left);
    cout<<"Enter data for inserting in right"<<endl;
    root->right= buildTree(root->right);
    return root;
}

void LevelOrderTraversal(node * root){
    queue <node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void Inorder(node* root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(node* root){
    if(root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root=NULL;
    root = buildTree(root);
    LevelOrderTraversal(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    Preorder(root);
    cout<<endl;
    Postorder(root);
    return 0;
}

//1 2 3 -1 -1 5 -1 -1 9 7 -1 -1 8 -1 -1//