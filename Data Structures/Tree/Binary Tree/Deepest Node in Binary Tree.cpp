#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// Non-Recursive Solution for Deepest Node
BTNode* DeepestNode(BTNode *root){
	queue<BTNode*> Q;
	BTNode* temp;
	if(root)
		Q.push(root);
	else
		return nullptr;
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		if(temp->left)
			Q.push(temp->left);
		if(temp->right)
			Q.push(temp->right);
	}
	return temp;
}
int main(){
	return 0;
}