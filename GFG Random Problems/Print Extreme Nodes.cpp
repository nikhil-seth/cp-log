//https://practice.geeksforgeeks.org/problems/extreme-nodes-in-alternate-order/1
// Extreme nodes in alternate order
void printExtremeNodes(Node* root){
    if(!root)
        return;
    queue<Node*> q;
    Node *prev=nullptr;
    q.push(root);
    q.push(nullptr);
    int level=1;
    while(!q.empty()){
        prev=root;
        root=q.front();
        q.pop();
        if(!root){
            level++;
            if(level%2==0){
                cout<<prev->data<<' ';
                if(!q.empty())
                    cout<<q.front()->data<<' ';
            }
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
}