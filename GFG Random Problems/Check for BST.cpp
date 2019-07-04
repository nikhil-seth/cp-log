// https://practice.geeksforgeeks.org/problems/check-for-bst
//Check for BST
bool isX(Node *root,int ma,int mi){
    if(!root)
        return 1;
    if(root->data>mi && root->data<ma){
        return isX(root->left,root->data,mi) && isX(root->right,ma,root->data);
    }
    return 0;
}        

bool isBST(Node* root) {
    if(!root)
        return 1;
    return isX(root,INT_MAX,INT_MIN);
}
