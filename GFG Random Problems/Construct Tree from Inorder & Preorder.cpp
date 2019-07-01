// https://practice.geeksforgeeks.org/problems/construct-tree-1/1
// Construct Tree from Inorder & Preorder
Node* bt(int in[],int pre[], int inStrt, int inEnd,int &pi){
    if(inStrt>inEnd)
        return nullptr;
    Node *nn;
    nn=newNode(pre[pi]);
    if(inStrt==inEnd){
        pi++;
        return nn;
    }
    int i;
    for(i=inStrt;i<=inEnd;i++){
        if(in[i]==pre[pi])
            break;
    }
    pi++;
    nn->left=bt(in,pre,inStrt,i-1,pi);
    nn->right=bt(in,pre,i+1,inEnd,pi);
    return nn;
}
Node* buildTree(int in[],int pre[], int inStrt, int inEnd){
    int pi=0;
    return bt(in,pre,inStrt,inEnd,pi);
}