// AVL Tree Insertion
// https://practice.geeksforgeeks.org/problems/avl-tree-insertion/1
int h(Node *root){
    if(!root)
        return 0;
    return root->height;
}
Node* LL(Node *root){
    Node *W=root->left;
    root->left=W->right;
    W->right=root;
    root->height=max(h(root->left),h(root->right))+1;
    W->height=max(h(W->left),h(W->right))+1;
    return W;
}
Node* RR(Node *root){
    Node *W=root->right;
    root->right=W->left;
    W->left=root;
    root->height=max(h(root->left),h(root->right))+1;
    W->height=max(h(W->left),h(W->right))+1;
    return W;
}
Node* LR(Node *root){
    root->left=RR(root->left);
    return LL(root);
}
Node* RL(Node *root){
    root->right=LL(root->right);
    return RR(root);
}
Node* insertToAVL( Node* root, int data){
    if(!root){   // nullptr.
        Node *nn=new Node;
        nn->left=nn->right=nullptr;
        nn->data=data;
        nn->height=1;
        root=nn;
    }
    else if(root->data>data){
        root->left=insertToAVL(root->left,data);
        if(h(root->left)-h(root->right)==2){
            if(root->left->data>data)
                root=LL(root);
            else
                root=LR(root);
        }
    }
    else if(root->data<data){ // right m jayega
        root->right=insertToAVL(root->right,data);
        if(h(root->right)-h(root->left)==2){ //Property Violated.
            if(root->right->data<data)  // RR
                root=RR(root);
            else
                root=RL(root);
        }
    }
    root->height=max(h(root->left),h(root->right))+1;
    return root;
}