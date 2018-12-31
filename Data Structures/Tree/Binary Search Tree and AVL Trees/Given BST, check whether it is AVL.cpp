#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Check whether given tree in an AVL tree.
int isAVL(BSTNode *root){
	if(root==nullptr)
		return 0;
	int l,r;
	l=isAVL(root->left);
	r=isAVL(root->right);
	if(l==-1 || r==-1)
		return -1;
	if(abs(l-r)==0 || abs(l-r)==1)
		return max(l,r)+1;
	return -1;
}
int main(){
	return 0;
}