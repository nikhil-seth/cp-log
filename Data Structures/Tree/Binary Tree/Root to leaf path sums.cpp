// https://practice.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1
// Root to leaf paths sum
long long fn(Node *root,long long val){
    if(!root)
        return 0;
    if(!root->left && !root->right) // Leaf Node.
        return (val*10)+root->data;
    return fn(root->left,val*10+root->data) + fn(root->right,val*10+root->data);
}
long long treePathsSum(Node *root)
{
    return fn(root,0);
}