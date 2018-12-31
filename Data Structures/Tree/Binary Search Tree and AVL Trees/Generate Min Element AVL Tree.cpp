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
// Given a height (H), return algo for generating a min element AVL tree.
AVLNode *GenMinTree(int h,int count){
	if(h==0)
		return nullptr;
	AVLNode *root;
	root=(AVLNode*)malloc(sizeof(AVLNode));
	root->left=GenMinTree(h-1,count);
	root->data=count++;
	root->right=GenMinTree(h-2,count);
	root->ht=max(height(root->left),height(root->right))+1;
	return root;
}
int main(){
	return 0;
}