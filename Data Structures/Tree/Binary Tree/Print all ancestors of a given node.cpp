#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
// Print all Ancestors of a node.
int PrintAncestor(BTNode *root,BTNode *a){
	if(root==nullptr)
		return 0;
	if(root==a)
		return 1;
	if(PrintAncestor(root->left,a) || PrintAncestor(root->right,a)){
		cout<<root->data<<' ';
		return 1;
	}
	return 0;
}
int main(){
	return 0;
}