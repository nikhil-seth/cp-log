#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
// Recursive Solution  -> LDR
void InOrderRecursive(BTNode *root){
	if(root){
		InOrderRecursive(root->left);
		cout<<root->data<<' ';
		InOrderRecursive(root->right);
	}
}

// Iterative Solution  -> LDR
void InOrder(BTNode *root){
	stack <BTNode*> S;
	while(1){
		while(root){
			S.push(root);
			root=root->left;
		}
		if(S.empty())
			break;
		root=S.top();
		cout<<root->data;
		root=root->right;
		S.pop();
	}
}
int main(){
	return 0;

}