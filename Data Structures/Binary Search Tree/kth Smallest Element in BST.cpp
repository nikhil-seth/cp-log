#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// kth Smallest element in Binary Search Tree
// Inorder Trav-> Sorted Sequence -> Will Give Kth Smallest Element
BSTNode *KthSmallest(BSTNode *root,int k){
	if(!root)
		return nullptr;
	stack<BSTNode*> S;
	int count=0;
	while(1){
		while(root){
			S.push(root);
			root=root->left;
		}
		if(S.empty())
			break;
		root=S.top();
		if(++count==k)
			return root;
		S.pop();
		root=root->right;
	}
	return nullptr;
}