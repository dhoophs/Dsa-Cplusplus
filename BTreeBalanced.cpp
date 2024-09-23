class Sol{
    public:
    pair<bool,int>BalancedFast(node* root){
        if(root==NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }

        pair<bool,int>left=BalancedFast(root->left);
        pair<bool,int>right=BalancedFast(root->right);

        bool leftans=left.first;
        bool rightans=right.first;

        bool diff= abs(left.second-right.second)<=1;

        if(leftans && rightans && diff){
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;

    }
    bool isbalanced(node* root){
        return BalancedFast(root).first;
    }
};