#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
	BSTNode *next;
};
// Given a BT, connect all adjacent nodes at same level.(Assume BSTNode tobe BTNode)
void adj_connect(BSTNode *root){
	if(root==nullptr)
		return;
	queue<BSTNode*> Q;
	Q.push(root);
	BSTNode *temp,*prev=nullptr;
	int nc;
	while(1){
		nc=Q.size();
		if(nc==0)
			break;
		while(nc>0){
			temp=Q.front();
			temp->next=nullptr;
			if(prev==nullptr)
				prev=temp;
			else
				prev->next=temp;
			if(temp->left)
				Q.push(temp->left);
			if(temp->right)
				Q.push(temp->right);
			nc--;
			Q.pop();
		}
	}
}
// Time Complexity : O(n), Space Complexity : O(n).

// Optimized, we know that prev level has been connected by next pointer.
void adj_connectoptimized(BSTNode *root){
	if(!root)
		return;
	BSTNode *rightmostNode=nullptr,*nextHead=nullptr,*temp=root;
	while(temp!=nullptr){
		if(temp->left!=nullptr){
			if(rightmostNode==nullptr){
				rightmostNode=temp->left;
				nextHead=temp->left;
			}
			else{
				rightmostNode->next=temp->left;
				rightmostNode=rightmostNode->next;
			}
		}
		if(temp->right!=nullptr){
			if(rightmostNode==nullptr){
				rightmostNode=temp->right;
				nextHead=temp->right;
			}
			else {
				rightmostNode->next=temp->right;
				rightmostNode=rightmostNode->next;
			}
		}
		temp=temp->next;
		if(temp==nullptr)
			temp=nextHead;
	}
}
int main(){
	return 0;
}