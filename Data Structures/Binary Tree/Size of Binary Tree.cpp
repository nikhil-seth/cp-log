#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// Size of Binary Tree using Recursion
int SizeBTRec(BTNode *root){
	if(!root)
		return 0;
	else
		return 1 + SizeBTRec(root->left)+ SizeBTRec(root->right);
}

// Size of Binary Tree using Recursion
int SizeBT(BTNode *root){
	BTNode *temp=nullptr;
	int size=0;
	queue <BTNode*> Q;
	if(!root){
		return 0;
	}
	else
		Q.push(root);
	
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		size+=1;
		if(temp->left)
			Q.push(temp->left);
		if(temp->right)
			Q.push(temp->right);
		}
	return size;	
}
int main(){
	return 0;
}