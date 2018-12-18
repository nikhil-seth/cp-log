#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
// Recursive Solution  -> LRD
void PostOrderRecursive(BTNode *root){
	if(root){
		PostOrderRecursive(root->left);
		PostOrderRecursive(root->right);
		cout<<root->data<<' ';
	}
}

// Iterative Solution  -> LRD
void PostOrder(BTNode *root){
	stack <BTNode*> S;
	BTNode *prev=nullptr;
	do{
		while(root!=nullptr){
			S.push(root);
			root=root->left;
		}
		while(root==nullptr && !S.empty()){
			root=S.top();
			if(root->right==nullptr || root->right==prev){
				cout<<root->data;
				prev=root;
				root=nullptr;
				S.pop();
			}
			else
				root=root->right;
		}
	}while(!S.empty());
}

int main(){
	return 0;

}