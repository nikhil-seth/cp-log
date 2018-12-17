#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// Finding Max Element Using Recursion
int MaxElem(BTNode *root){
	if(!root)
		return INT_MIN;
	return max(max(MaxElem(root->left),MaxElem(root->right)),root->data);
}

// Finding Max Element Without using recursion (using Level order Traversal)
int MaxElemLOT(BTNode *root){
	BTNode *temp=nullptr;
	queue <BTNode*> Q;
	int m=INT_MIN;
	if(!root)
		Q.push(root);
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		if(temp==nullptr)
			continue;
		m=max(m,temp->data);
		Q.push(temp->left);
		Q.push(temp->right);
	}
	return m;
}
int main(){
	return 0;
}