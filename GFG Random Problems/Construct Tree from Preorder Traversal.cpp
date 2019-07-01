// Construct Tree from Preorder Traversal
// https://practice.geeksforgeeks.org/problems/construct-tree-from-preorder-traversal/1
Node *create(int data){
    Node *nn;
    nn=new Node;
    nn->data=data;
    nn->left=nn->right=nullptr;
}
struct Node *constructTree(int n, int pre[], char preLN[])
{
    if(n==0)
        return nullptr;
    stack<Node*> S;
    Node *root,*head=nullptr,*nn;
    nn=create(pre[0]);
    head=root=nn;
    int i=1;
    while(i<n){
        while(root){
            S.push(root);
            nn=create(pre[i]);
            root->left=nn;
            if(preLN[i]=='L')
                root=nullptr;
            else
                root=root->left;
            i++;
        }
        if(S.empty())
            break;
        root=S.top();
        S.pop();
        if(i<n){
            nn=create(pre[i]);
            root->right=nn;
            if(preLN[i]=='L')
                root=nullptr;
            else
                root=root->right;
            i++;
        }
    }
    return head;
}