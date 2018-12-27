#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};

// Check if BT is BST or not approach
// Inefficient Approach
int FindMax(BSTNode *root){
    while(root->right!=nullptr){
        root=root->right;
    }
    return root->data;
}
int FindMin(BSTNode *root){
    while(root->left!=nullptr)
        root=root->left;
    return root->data;
}
bool checkBST(BSTNode *root){
    if(!root)
        return true;
    int left,right;
    bool r1=true,r2=true;
    if(root->left){
        left=FindMax(root->left);
        if(left<root->data)
            r1=checkBST(root->left);
        else
            r1=false;
    }
    if(root->right){
        right=FindMin(root->right);
        if(right>root->data)
            r2=checkBST(root->right);
        else
            r2=false;
    }
    return (r1 && r2);
}

// Efficient Approach -> Traverse only Once
bool isBSTutil(BSTNode *root,int mi,int ma){
    if(root==nullptr)
        return true;
    if(root->data<mi || root->data >ma)
        return false;
    return isBSTutil(root->left,mi,root->data-1) && isBSTutil(root->right,root->data+1,ma);
}
bool isBST(BSTNode *root){
    return isBSTutil(root,INT_MIN,INT_MAX);
}


// Using Inorder Traversal (BEST METHOD)
bool isBSTIO(BSTNode *root){
    int prev=INT_MIN;
    stack<BSTNode *> S;
    while(1){
        while(root){
            S.push(root);
            root=root->left;
        }
        if(!S.empty())
            break;
        root=S.top();
        if(root->data<prev)
            return false;
        else
            prev=root->data;
        S.pop();
        root=root->right;
    }
   return true;
}
int main(){
	return 0;
}