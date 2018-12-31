#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Finding Element in BST.
// Returns nullptr if not found.

// Recursive approach
BSTNode *SearchBSTRec(BSTNode *root,int data){
	if(root==nullptr)
		return nullptr;
	if(root->data==data)
		return root;
	else if(root->data>data)
		return SearchBSTRec(root->left,data);
	else
		return SearchBSTRec(root->right,data);
}

// Iterative Approach
BSTNode *SearchBST(BSTNode *root,int data){
	if(!root)
		return nullptr;
	while(root!=nullptr){
		if(root->data==data)
			return root;
		else if(root->data<data)
			root=root->right;
		else
			root=root->left;
	}
	return root;
}
int main(){

	return 0;
}