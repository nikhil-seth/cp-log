#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left,*right;
};

BSTNode *insert(BSTNode *root,int data){
	if(root==nullptr){
		BSTNode *newnode;
		newnode=(BSTNode*)malloc(sizeof(BSTNode));
		newnode->data=data;
		newnode->left=nullptr;
		newnode->right=nullptr;
		return newnode;
	}
	if(data<root->data)
		root->left=insert(root->left,data);
	if(data>root->data)
		root->right=insert(root->right,data);
	return root;
}
void inorder(BSTNode *root){
	if(root==nullptr)
		return;
	inorder(root->left);
	cout<<root->data<<' ';
	inorder(root->right);
}
void treesort(int arr[],int n){
	BSTNode *root=nullptr;
	for(int i=0;i<n;i++)
		root=insert(root,arr[i]);
	inorder(root);
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(auto &x:arr)
		cin>>x;
	treesort(arr,n);
	return 0;
}