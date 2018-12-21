#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
// LCA of 2 Nodes
BTNode *LCA(BTNode *root,BTNode *a,BTNode *b){
	if(root==nullptr)
		return root; 	// Bcoz a,b not found in root, toh null hi jayeh
	if(root==a || root==b) // This means koi ek yehi h, mtlb dusra neeche hoga ya iske level pe hoga to LCA toh ho sakta h ye.
		return root;
	BTNode *left,*right;
	left=LCA(root->left,a,b);
	right=LCA(root->right,a,b);
	if(left && right) // Means agar left & right dono m ek ek h toh mtlb root hi LCA hoga.
		return root;
	else if(left)
		return left;
	else
		return right;
}
int main(){
	return 0;
}