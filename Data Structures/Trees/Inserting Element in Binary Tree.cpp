#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};


// Inserting an Element in Binary Tree
BTNode* InsertElem(BTNode *root,int data){
	BTNode *newNode,*temp=nullptr;
	// Creating a new element
	newNode=(BTNode*)malloc(sizeof(BTNode));
	newNode->data=data;
	newNode->left=nullptr;
	newNode->right=nullptr;

	queue <BTNode*> Q;
	if(!root){
		root=newNode;
		return root;
	}
	else
		Q.push(root);
	
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		if(temp->left)
			Q.push(temp->left);
		else{
			temp->left=newNode;
			return root;
		}
		if(temp->right)
			Q.push(temp->right);
		else{
			temp->right=newNode;
			return root;
		}
	}	
}
int main(){
	return 0;
}