// Height of Spiral Tree
// https://practice.geeksforgeeks.org/problems/height-of-spiral-tree/1
int findTreeHeight(Node* root){
    if(!root)   // nullptr
        return 0;
    if(root->right && root->right->left==root)
        return 1;// Agar Root right hai(leaf has it always) && root->right(next leaf ka prev check).
    return max(findTreeHeight(root->left),findTreeHeight(root->right))+1;
}