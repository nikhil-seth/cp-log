#include<bits/stdc++.h>
using namespace std;

struct AVLNode{
	int data;
	AVLNode *left;
	AVLNode *right;
	int ht;
};
int height(AVLNode *root){
	if(root==nullptr)
		return -1;
	else
		return root->ht;
}
// Given an AVL/BST tree, Find all elements whose data is in range [a,b].
int CountNodes(AVLNode *root,int a,int b){
	if(root==nullptr)
		return 0;
	if(root->data>b)
		return CountNodes(root->left,a,b);
	if(root->data<a)
		return CountNodes(root->right,a,b);
	if(root->data>=a && root->data<=b)
		return 1 + CountNodes(root->left,a,b) + CountNodes(root->right,a,b);
}
int main(){
	return 0;
}