#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
struct LNode{
    int data;
    LNode *next;
};
// Convert Sorted Linked List to BST.
int size(LNode *root){
    int count=0;
    while(root!=nullptr)
        root=root->next;
    return count;
}
BSTNode *LLToBSTFN(LNode **root,int n){
    if(n<=0)
        return nullptr;
    BSTNode *newnode,*left,*right;
    left=LLToBSTFN(root,n/2);
    newnode=(BSTNode*)malloc(sizeof(BSTNode));
    newnode->data=(*root)->data;
    newnode->left=left;
    (*root)=(*root)->next;
    newnode->right=LLToBSTFN(root,n-(n/2)-1);
    return newnode;
}
BSTNode *LLToBST(LNode *root){
    int n=size(root);
    return LLToBSTFN(&root,n);
}
int main(){
	return 0;
}