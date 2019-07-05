// Convert Level Order Traversal to BST
struct ND{
    Node *ptr;
    int min, max;
};
Node* constructBst(int arr[], int n){
    if(n==0)
        return nullptr;
    Node *root=new Node(arr[0]);
    ND nn,temp;
    nn.ptr=root;
    nn.min=INT_MIN;
    nn.max=INT_MAX;
    queue<ND> q;
    int i=1;
    q.push(nn);
    while(i<n){
        nn=q.front();
        q.pop();
        if(arr[i]<nn.ptr->data && arr[i]>nn.min){
            Node *t=new Node(arr[i++]);
            temp.ptr=t;
            temp.min=nn.min;
            temp.max=nn.ptr->data;
            nn.ptr->left=t;
            q.push(temp);
        }
        if(i<n && arr[i]>nn.ptr->data && arr[i]<nn.max){
            Node *t=new Node(arr[i++]);
            temp.ptr=t;
            temp.min=nn.ptr->data;
            temp.max=nn.max;
            nn.ptr->right=t;
            q.push(temp);
        }
    }
    return root;
}
    