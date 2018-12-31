#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
//  Height or Depth of Binary Tree (Recursive)
int heightBTRec(BTNode *root){
	if(root==nullptr)
		return 0;
	return 1+ max(heightBTRec(root->left),heightBTRec(root->right));
}
// This approach is similar to DFS of Graph Algos.

// Non-Recursive Solution for Height
int heightBT(BTNode *root){
	int height=0,nodeCount;
	queue<BTNode*> Q;
	BTNode *temp;
	if(!root)
		return 0;
	else
		Q.push(root);
	while(1){
			nodeCount=Q.size();
			if(nodeCount==0)
				return height;
			height++;
			while(nodeCount>0){
				temp=Q.front();
				Q.pop();
				if(temp->left);
					Q.push(temp->left);
				if(temp->right);
					Q.push(temp->right);
				nodeCount--;
			}
		}
		return height;
}
int main(){
	return 0;
}