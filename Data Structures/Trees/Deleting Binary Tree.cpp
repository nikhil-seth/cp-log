#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// Deleting A Tree
// As all Siblings of a node are needed to be deleted first therefore Post Order Traversal is best Option.
// However Inverse Level Order Traversal Can also be used

// Deleting Element using Inverse Level order Traversal
void DelInvLot(BTNode *root){
	BTNode *temp=nullptr;
	queue <BTNode*> Q;
	stack <BTNode*> S;

	if(!root)
		return;
	else
		Q.push(root);
	
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		S.push(temp);
		if(temp->left)
			Q.push(temp->left);
		if(temp->right)
			Q.push(temp->right);
		}
	while(!S.empty()){
		temp=S.top();
		S.pop();
		free(temp);
	}	
}

// Efficient Approach : Using Post Order Traversal (Recursive).
void DelBT(BTNode *root){
	if(!root)
		return;
	DelBT(root->left);
	DelBT(root->right);
	free(root);	
}
// Efficient Approach : Using Post Order Traversal (Non-Recursive)
/* Will Be added Soon */
int main(){
	return 0;
}