#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
// Program that prints all root->Leaf Paths
void PrintArray(int arr[],int len){
	for(int i=0;i<len;i++)
		cout<<arr[i]<<' ';
}
void RootToLeaf(BTNode *root,int arr[],int len){
	if(root==nullptr)
		return;
	arr[len++]=root->data;
	if(root->right==nullptr && root->left==nullptr)
		PrintArray(arr,len);
	else{
		RootToLeaf(root->left,arr,len);
		RootToLeaf(root->right,arr,len);		
	}
}
int main(){
	return 0;
}