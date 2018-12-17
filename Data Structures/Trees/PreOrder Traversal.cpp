#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
// Recursive Solution  -> DLR
void PreOrderRecursive(BTNode *root){
	if(root){
		cout<<root->data<<' ';
		PreOrderRecursive(root->left);
		PreOrderRecursive(root->right);
	}
}

// Iterative Solution  -> DLR
void PreOrder(BTNode *root){
	stack <BTNode*> S;
	while(1){
		while(root){
			cout<<root->data;
			S.push(root);
			root=root->left;
		}
		if(S.empty())
			break;
		root=S.top();
		S.pop();
		root=root->right;
	}
}
int main(){
	return 0;

}