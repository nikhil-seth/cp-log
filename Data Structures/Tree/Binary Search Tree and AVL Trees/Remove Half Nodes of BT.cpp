#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Given a BST, remove all of its half nodes.
BSTNode *rem_half_nodes(BSTNode *root){
	if(root==nullptr)
		return nullptr;
	root->left=rem_half_nodes(root->left);
	root->right=rem_half_nodes(root->right);
	if((root->left==nullptr)^(root->right==nullptr)){
		if(root->left)
			return root->left;
		else 
			return root->right;
	}
	return root;
}
int main(){
	return 0;
}