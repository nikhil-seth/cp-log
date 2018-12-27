#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Deleting an  Element in BST.

// Recursive approach
BSTNode *LCABSTREC(BSTNode *root,int a,int b){
	if(root==nullptr)
        return nullptr;
    if(a==root->data)
   		return root;
	if(b==root->data)
    	return root;
	if((a<root->data && b>root->data) || (a>root->data && b<root->data))
        	return root;
    if(a<root->data)
    	return LCABSTREC(root->left,a,b);
    else
    	return LCABSTREC(root->right,a,b);
}
// Iterative Approach

BSTNode *LCA(BSTNode *root,int a,int b){
	if(root==nullptr)
        return nullptr;
    while(1){
    	if(a==root->data)
       		return root;
    	if(b==root->data)
        	return root;
    	if((a<root->data && b>root->data) || (a>root->data && b<root->data))
        	return root;
    	if(a<root->data)
        	root=root->left;
    	else
        	root=root->right;
    }
}

int main(){

	return 0;
}