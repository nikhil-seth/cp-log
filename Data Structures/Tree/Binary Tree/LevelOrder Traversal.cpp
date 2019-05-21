#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};

// Level Order Traversal
void LevelOrder(BTNode *root){
	queue <BTNode*> Q;
	BTNode *temp=nullptr;
	if(!root)
		return;
	Q.push(root);
	while(!Q.empty()){
		if(temp==nullptr)
			continue;
		temp=Q.front();
		Q.pop();
		cout<<temp->data;
		Q.push(temp->left);
		Q.push(temp->right);
	}
}

int main(){
	return 0;

}