//Tree from Postorder and Inorder
// https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1
Node *bt(int in[],int post[],int s,int e,int &n){
    if(s>e)
        return nullptr;
    if(s==e){
        Node *t;
        t=new Node(in[s]);
        n--;
        return t;
    }
    Node *t;
    t=new Node(post[n]);
    int i;
    for(i=s;i<=e;i++){
        if(in[i]==post[n])
            break;
    }
    n--;
    t->right=bt(in,post,i+1,e,n);
    t->left=bt(in,post,s,i-1,n);
    return t;
}
Node *buildTree(int in[], int post[], int n){
    int x=n-1;
    return bt(in,post,0,n-1,x);
}