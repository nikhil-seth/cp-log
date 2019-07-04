// https://practice.geeksforgeeks.org/problems/construct-tree-from-inorder-and-levelorder/1/?ref=self
// Construct tree from Inorder and LevelOrder
int search(int inorder[],int s,int e,int val){
    for(int i=s;i<=e;i++){
        if(inorder[i]==val)
            return 1;
    }
    return 0;
}
Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n){
    if(iStart>iEnd)
        return nullptr;
    Node *root=new Node;
    root->left=nullptr;
    root->right=nullptr;
    root->key=levelOrder[0];
    if(iStart==iEnd)
        return root;
    // Create 2 arrays, having left element of lot & right element of LOT.
    int i;
    for(i=iStart;i<=iEnd;i++){
        if(inorder[i]==levelOrder[0])
            break;
    }
    // i is index of root in inorder.
    int *left,*right;
    left=new int[i-iStart];
    right=new int[iEnd-i];
    int j=0,l=0;
    for(int k=1;k<n;k++){
        if(search(inorder,iStart,i-1,levelOrder[k]))
            left[j++]=levelOrder[k];
        else
            right[l++]=levelOrder[k];
    }
    root->left=buildTree(inorder,left,iStart,i-1,i-iStart);
    root->right=buildTree(inorder,right,i+1,iEnd,iEnd-i);
    return root;
}