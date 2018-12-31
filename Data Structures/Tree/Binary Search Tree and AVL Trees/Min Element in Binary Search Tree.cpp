#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Finding Minimum Element in BST.

// Recursive approach
BSTNode *MinElemBSTRec(BSTNode *root){
	if(root==nullptr)
		return nullptr;
	if(root->left!=nullptr)
		return MinElemBSTRec(root->left);
	else
		return root;
}
// Iterative Approach
BSTNode *MinElemBST(BSTNode *root){
	if(!root)
		return nullptr;
	while(root->left!=nullptr)
		root=root->left;
	return root;
}

int main(){

	return 0;
}