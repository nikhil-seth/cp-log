// https://practice.geeksforgeeks.org/problems/largest-independent-set-problem/1
// Largest Independent Set Problem
int fn(Node* root,map<Node*,int> &m){
    if(root==nullptr)
        return 0;
    if(!root->left && !root->right)
        return 1;
    if(m[root])
        return m[root];
    int a=0,b=1;
    if(root->left){
        a+=fn(root->left,m);
        b+=fn(root->left->left,m);
        b+=fn(root->left->right,m);
    }
    if(root->right){
        a+=fn(root->right,m);
        b+=fn(root->right->left,m);
        b+=fn(root->right->right,m);
    }
    m[root]=max(a,b);
    return m[root];
}
int LISS(struct Node *root){
    map<Node*,int> m;
    return fn(root,m);
}