#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// Inverse Level Order Traversal
// Use Stack for storing output.
void InvLot(BTNode *root){
	BTNode *temp=nullptr;
	queue <BTNode*> Q;
	stack <int> S;

	if(!root)
		return;
	else
		Q.push(root);
	
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		S.push(temp->data);
		if(temp->left)
			Q.push(temp->left);
		if(temp->right)
			Q.push(temp->right);
		}
	while(!S.empty()){
		cout<<S.top();
		S.pop();
	}	
}
int main(){
	return 0;
}