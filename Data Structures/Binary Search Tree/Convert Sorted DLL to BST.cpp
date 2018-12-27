#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
};
// Converting DLL to BT.
// left->prev,right->next
BSTNode *Middle(BSTNode *head){
    BSTNode *a=head;
    while(a!=nullptr){
        a=a->right->right;
        head=head->right;
    }
    return head;
}
BSTNode *DLLToTree(BSTNode *root){
    if(root==nullptr)
        return root;
    BSTNode *t1,*t2,*t3;
    t1=Middle(root);
    t2=t1->left;
    t2->right=nullptr;
    t3=t1->right;
    t3->left=nullptr;
    t2=DLLToTree(root);
    t3=DLLToTree(t3);
    t1->right=t3;
    t1->left=t2;
    return t1;
}

// Efficient Approach TBA soon.
int main(){
	return 0;
}