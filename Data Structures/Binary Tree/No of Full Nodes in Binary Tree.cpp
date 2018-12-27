#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// No of full nodes in binary tree
int LeavesBTRec(BTNode *root){
	int s=0;
	if(root==nullptr)
		return 0;
	else if(root->right!=nullptr && root->left!=nullptr)
		s=1;
	return s +LeavesBTRec(root->left)+LeavesBTRec(root->right);
}

// Iterative Method for No of full nodes in Binary Tree
int LeavesBT(BTNode *root){
	if(root==nullptr)
		return 0;
	int fnodes=0;
	queue<BTNode*> Q;
	BTNode *temp;
	Q.push(root);
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		if(temp->right!=nullptr && temp->left!=nullptr){
			fnodes++;
			Q.push(temp->left);
			Q.push(temp->right);
		}
		else{
		if(temp->right!=nullptr)
			Q.push(temp->right);
		if(temp->left!=nullptr)
			Q.push(temp->left);
		}
	}
	return fnodes;
}
int main(){
	return 0;
}