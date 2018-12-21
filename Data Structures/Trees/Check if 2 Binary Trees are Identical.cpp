#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// Tell if 2 Binary Trees are Structrally Identical
bool TreeIdentical(BTNode *root1,BTNode *root2){
	if(root1==nullptr && root2==nullptr)
		return true;
	if(root1==nullptr || root2==nullptr)
		return false;
	if(root1->data!=root2->data)
		return false;
	return TreeIdentical(root1->left,root2->left) && TreeIdentical(root1->right,root2->right);
}

int main(){
	return 0;
}