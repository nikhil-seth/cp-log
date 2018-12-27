#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Deleting an  Element in BST.

// Recursive approach
BSTNode* FindMax(BSTNode *root,int data){
	if(root->data==data)
		return root;
	else if(root->data>data)
		return FindMax(root->left,data);
	else
		return FindMax(root->right,data);
}
BSTNode *DeleteRec(BSTNode *root,int data){
	BSTNode *temp;
	if(root==nullptr){
		cout<<"Not Found";
		return root;
	}
	if(data<root->data)
		root->left=DeleteRec(root->left,data);
	else if(data>root->data)
		root->right=DeleteRec(root->right,data);
	else {
		if(root->left && root->right){
			temp=FindMax(root->left);
			root->data=temp->data;
			root->left=DeleteRec(root->left,root->data);
		}
		else{
			temp=root;
			if(root->left)
				root=root->left;
			else
				root=root->right;
			free(temp);
		}
	}
	return root;
}


int main(){

	return 0;
}