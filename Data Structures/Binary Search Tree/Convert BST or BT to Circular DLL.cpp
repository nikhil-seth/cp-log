#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Converting BST/BT to Circular DLL with Space O(1).
// left->prev,right->next
BSTNode *Append(BSTNode *a,BSTNode *b){
    if(!a)
        return b;
    if(!b)
        return a;
    BSTNode *aLast,*bLast;
    aLast=a->left;
    bLast=b->left;
    aLast->right=b;
    b->left=aLast;
    bLast->right=a;
    a->left=bLast;
    return a;
}
BSTNode *TreeToCDLL(BSTNode *root){
    if(root==nullptr)
        return root;
    BSTNode *alist,*blist;
    alist=TreeToCDLL(root->left);
    blist=TreeToCDLL(root->right);
    root->left=root;
    root->right=root;
    return Append(Append(alist, root), blist);
}

int main(){
	return 0;
}