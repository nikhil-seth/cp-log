// https://practice.geeksforgeeks.org/problems/check-if-two-nodes-are-cousins/1
// Check if two Nodes are Cousins
int lot(Node *root,int val){
    if(!root)
        return -1;
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    int l=0;
    int res=-1;
    while(!q.empty()){
        root=q.front();
        q.pop();
        if(root && root->data==val){
            res=l;
            break;
        }
        if(!root){
            l++;
            if(!q.empty())
                q.push(nullptr);
        }
        else{
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
        }
    }
    return res;
}
bool chkparent(Node *root,int a,int b){
    if(!root)
        return 0;
    if(root->left && root->right){
        if(root->left->data==a && root->right->data==b)
            return 0;
        if(root->left->data==b && root->right->data==a)
            return 0;
    }
    if(root->left && (root->left->data==a || root->left->data==b))
        return 1;
    if(root->right && (root->right->data==a || root->right->data==b))
        return 1;
    return chkparent(root->left,a,b) || chkparent(root->right,a,b);
}
bool ifCousin(Node *root,Node *a,Node *b){
    if(!root)
        return 0;
    int al=lot(root,a->data),bl=lot(root,b->data);
    if(al==-1 || al!=bl)
        return 0;
    return chkparent(root,a->data,b->data);
}