#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Given a BST, remove all of its leaf nodes.
BSTNode *rem_leaf_nodes(BSTNode *root){
	if(root==nullptr)
		return nullptr;
	root->left=rem_leaf_nodes(root->left);
	root->right=rem_leaf_nodes(root->right);
	if((root->left==nullptr) && (root->right==nullptr)){
		return nullptr;
	return root;
}
int main(){
	return 0;
}