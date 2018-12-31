#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Given a height (H), algo for HB(0).
BSTNode *HB0(int h,int count){
	if(h==0)
		return nullptr;
	BSTNode *newnode;
	newnode=(BSTNode*)malloc(sizeof(BSTNode));
	newnode->left=HB0(h-1,count+1);
	newnode->data=count++;
	newnode->right=HB0(h-1,count+1);
	return newnode;
}
int main(){
	return 0;
}