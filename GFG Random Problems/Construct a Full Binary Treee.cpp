// Construct a Full Binary Tree
// https://practice.geeksforgeeks.org/problems/construct-a-full-binary-tree/1
Node* fn(int pre[],int preM[],int s1,int e1,int s2,int e2){
    if(s1>e1)
        return nullptr;
    Node *nn=new Node;
    nn->data=pre[s1];
    nn->left=nn->right=nullptr;
    if(s1==e1)
        return nn;
    int i=0,j=0;
    for(i=s2;i<=e2;i++){
        if(preM[i]==pre[s1+1])
            break;
    }
    for(j=s1;j<=e1;j++){
        if(pre[j]==preM[s2+1])
            break;
    }
    nn->left=fn(pre,preM,s1+1,j-1,i,e2);
    nn->right=fn(pre,preM,j,e1,s2+1,i-1);
    return nn;
}
Node* constructBinaryTree(int pre[], int preMirror[], int size){
    return fn(pre,preMirror,0,size-1,0,size-1);
}


// Second Approach.
Node* fn(int pre[],int s,int e){
    if(s>e)
        return nullptr;
    Node *nn=new Node;
    nn->data=pre[s];
    nn->left=nn->right=nullptr;
    if(s==e)
        return nn;
    int val=(e+s)/2;
    nn->left=fn(pre,s+1,val);
    nn->right=fn(pre,val+1,e);
    return nn;
}
Node* constructBinaryTree(int pre[], int preMirror[], int size){
    if(size==0)
        return nullptr;
    return fn(pre,0,size-1);
}