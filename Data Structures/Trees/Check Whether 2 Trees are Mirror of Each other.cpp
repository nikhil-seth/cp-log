#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
// Check whether 2 Trees are Mirrors of Each Other.
bool CheckMirror(BTNode *root1,BTNode *root2){
	if(!root1 && !root2)
		return true;
	if(!root1 || !root2)
		return false;
	if(root1->data!=root2->data)
		return false;
	return CheckMirror(root1->left,root2->right) && CheckMirror(root1->right,root2->left);
}
int main(){
	return 0;
}