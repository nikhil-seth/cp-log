// https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1
//Level order traversal in spiral form

void printSpiral(Node *root)
{
    if(!root)
        return;
    queue<Node*> q;
    stack<int> s;
    q.push(root);
    q.push(nullptr);
    int ctr=0;
    while(!q.empty()){
        root=q.front();
        q.pop();
        if(!root){
            while(!s.empty()){
                cout<<s.top()<<' ';
                s.pop();
            }
            ctr=1-ctr;
            if(!q.empty())
                q.push(nullptr);
        }
        else{
            if(ctr==0)
                s.push(root->data);
            else
                cout<<root->data<<' ';
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
        }
    }
}