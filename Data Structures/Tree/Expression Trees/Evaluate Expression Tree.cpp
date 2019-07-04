// https://practice.geeksforgeeks.org/problems/expression-tree/1
// Expression Tree
int evalTree(node* root){
    if(!root)
        return 0;
    if(!root->left && !root->right){
        // Matlab yeh operand hai.
        return stoi(root->data);
    }
    int a,b;
    a=evalTree(root->left);
    b=evalTree(root->right);
    switch(root->data[0]){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
    }
}
