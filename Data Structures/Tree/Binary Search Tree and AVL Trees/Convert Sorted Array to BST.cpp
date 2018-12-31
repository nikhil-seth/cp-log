#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Convert Sorted Array to BST.
BSTNode *ArrToBST(int arr[],int left,int right){
    int mid;
    if(left<right)
        return nullptr;
    BSTNode *newnode;
    newnode=(BSTNode*)malloc(sizeof(BSTNode));
    if(left==right){
        newnode->data=arr[left];
        newnode->left=newnode->right=nullptr;
        return newnode;
    }
    mid=left+(right-left)/2;
    newnode->data=arr[mid];
    newnode->left=ArrToBST(arr,left,mid-1);
    newnode->right=ArrToBST(arr,mid+1,right);
    return newnode;
}
int main(){
	return 0;
}