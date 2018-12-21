#include<bits/stdc++.h>
using namespace std;

struct BTNode{
	int data;
	BTNode *left;
	BTNode *right;
};
// Program that prints all root->Leaf Paths (root->node)
void PrintArray(int arr[],int len){
	for(int i=0;i<len;i++)
		cout<<arr[i]<<' ';
}
void SumDefined(BTNode *root,int arr[],int len,int sum){
	if(root==nullptr)
		return;
	sum-=root->data;
	if(sum==0)
		PrintArray(arr,len);
	else{
		RootToLeaf(root->left,arr,len);
		RootToLeaf(root->right,arr,len);		
	}
}
int main(){
	return 0;
}