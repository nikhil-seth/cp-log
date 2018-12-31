#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Given a BST, remove prone nodes.
BSTNode *rem_prone_nodes(BSTNode *root,int a,int b){
	if(root==nullptr)
		return nullptr;
	root->left=rem_prone_nodes(root->left,a,b);
	root->right=rem_prone_nodes(root->right,a,b);
	if(a<=root->data && b>=root->data)
		return root;
	else if(root->right)
		return root->right;
	else if(root->left)
		return root->left;
	else
		return nullptr;
}
int main(){
	return 0;
}