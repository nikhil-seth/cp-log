#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// No of Leaves in binary tree
int LeavesBTRec(BTNode *root){
	if(root==nullptr)
		return 0;
	if(root->right==nullptr && root->left==nullptr)
		return 1;
	return LeavesBTRec(root->left)+LeavesBTRec(root->right);
}
// Non-Recursive Method for No of Leaves in Binary Tree
int LeavesBT(BTNode *root){
	if(root==nullptr)
		return 0;
	int nleaves=0;
	queue<BTNode*> Q;
	BTNode *temp;
	Q.push(root);
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		if(temp->right==nullptr && temp->left==nullptr)
			nleaves++;
		else{
		if(temp->right!=nullptr)
			Q.push(temp->right);
		if(temp->left!=nullptr)
			Q.push(temp->left);
		}
	}
	return nleaves;
}
int main(){
	return 0;
}