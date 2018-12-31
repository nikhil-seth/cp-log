#include<bits/stdc++.h>
using namespace std;

struct BSTNode{
	int data;
	BSTNode *left;
	BSTNode *right;
	BSTNode *next;
};
// Find Max path Sum between any 2 nodes in BT.
int MaxPathSum(BSTNode *root,int &res){

    if(!root)
        return 0;
    int ls,rs;
    ls=MaxPathSum(root->left,res);
    rs=MaxPathSum(root->right,res);
    int ms=max(root->data,max(ls,rs)+root->data);
    int mt=max(ms,ls+rs+root->data);
    res=max(res,mt);
    return ms;

}
int main(){
	return 0;
}