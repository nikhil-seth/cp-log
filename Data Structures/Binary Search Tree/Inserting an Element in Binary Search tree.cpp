#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Inserting an  Element in BST.
// Time Complexity : O(n)
// Space Complexit : O(n) for recursive,O(1) for Iterative.
// n-> No of levels
// Recursive approach
BSTNode *InsertRec(BSTNode *root,int data){
	if(root==nullptr){
		root=(BSTNode*)malloc(sizeof(BSTNode));
		root->data=data;
		root->left=root->right=nullptr;
		return root;
	}
	if(data<root->data)
		root->left=InsertRec(root->left,data);
	else
		root->right=InsertRec(root->right,data);
	return root;
}

// Iterative Approach
BSTNode *Insert(BSTNode *root,int data){
	if(root==nullptr){
		root=(BSTNode*)malloc(sizeof(BSTNode));
		root->data=data;
		root->left=root->right=nullptr;
		return root;
	}
	BSTNode *newNode;
	newNode=(BSTNode*)malloc(sizeof(BSTNode));
	newNode->data=data;
	newNode->left=newNode->right=nullptr;
	while(root){
		if(root->data==data){
			free(newNode);
			return root;
		}
		else if(root->data>data){
		    if(root->left==nullptr){
		        root->left=newNode;
		        return root->left;
		    }
		    else
		        root=root->left;
		}
		else{
		    if(root->right==nullptr){
		        root->right=newNode;
		        return root->right;
		    }
		    else
		        root=root->right;
		}
	}
	return root;
}

int main(){

	return 0;
}