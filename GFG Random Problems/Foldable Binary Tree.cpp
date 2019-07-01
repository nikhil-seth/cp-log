//  https://practice.geeksforgeeks.org/problems/foldable-binary-tree/1
// Foldable Binary Tree
bool fn(node *r1,node *r2){
    if(!r1 && !r2)
        return 1;
    if(!r1 || !r2)
        return 0;
    if(r1->left && !r2->right)
        return 0;
    if(r1->right && !r2->left)
        return 0;
    return fn(r1->left,r2->right) && fn(r1->right,r2->left);
}
bool isFoldable(struct node *root)
{
    return fn(root->left,root->right);
}