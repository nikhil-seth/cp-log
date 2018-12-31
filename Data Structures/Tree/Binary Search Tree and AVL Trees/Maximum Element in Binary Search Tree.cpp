#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Finding Maximum Element in BST.

// Recursive approach
BSTNode *MaxElemBSTRec(BSTNode *root){
	if(root==nullptr)
		return nullptr;
	if(root->right!=nullptr)
		return MaxElemBSTRec(root->right);
	else
		return root;
}
// Iterative Approach
BSTNode *MaxElemBST(BSTNode *root){
	if(!root)
		return nullptr;
	while(root->right!=nullptr)
		root=root->right;
	return root;
}

int main(){

	return 0;
}