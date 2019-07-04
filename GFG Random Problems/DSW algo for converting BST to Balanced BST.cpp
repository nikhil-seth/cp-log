// DSW Algo for converting BST to balanced BST.
Node* LL(Node *x){
    Node *w=x->left;
    x->left=w->right;
    w->right=x;
    return w;
}
Node* RR(Node *x){
    Node *w=x->right;
    x->right=w->left;
    w->left=x;
    return w;
}
int no(Node *root){
    if(!root)
        return 0;
    return 1+no(root->left)+no(root->right);
}
Node* buildBalancedTree(Node* root){
    Node *cn=root;
    while(cn){
        if(cn==root && cn->left){
            while(cn->left){
                cn=LL(cn);
                root=cn;
            }
        }
        else if(cn->right && cn->right->left)
            cn->right=LL(cn->right);
        else
            cn=cn->right;
    }
    int n=no(root);
    // Skew Tree with Height.
    int m=pow(2,floor(log2(n+1)))-1;    // 31.
    // Total nodes excluding leafs of next level.
    // wo next level leafs ko sabse pehle rotation deni hogi.
    cn=root;
    Node *h=nullptr;
    for(int i=0;i<n-m;i++){
        if(i==0 && cn->right){
            cn=RR(cn);
            root=cn;
        }
        else if(cn->right && cn->right->right){
            cn->right=RR(cn->right);
            cn=cn->right;
        }
    }
    while(m>1){
        m/=2;
        cn=root;
        for(int i=0;i<m;i++){
            if(i==0){
                cn=RR(cn);
                root=cn;
            }
            else if(cn->right && cn->right->right){
                cn->right=RR(cn->right);
                cn=cn->right;
            }
        }
    }
    return root;
}