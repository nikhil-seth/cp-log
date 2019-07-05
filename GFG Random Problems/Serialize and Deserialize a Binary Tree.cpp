//https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1
// Serialize and Deserialize a Binary Tree
void serialize(Node *root,vector<int> &A){
    if(!root){
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}
/*this function deserializes
 the serialized vector A*/
Node *cr(int data){
    Node *t=new Node;
    t->left=t->right=nullptr;
    t->data=data;
    return t;
}
Node *deSerialize(vector<int> &A){
    if(A.size()==0)
        return nullptr;
    Node *root,*t;
    root=cr(A[0]);
    t=root;
    stack<Node*> s;
    int i=1;
    while(1){
        while(t){
            if(A[i]==-1)
                t->left=nullptr;
            else
                t->left=cr(A[i]);
            s.push(t);
            t=t->left;
            i++;
        }
        if(s.empty())
            break;
        t=s.top();
        s.pop();
        if(A[i]==-1)
            t->right=nullptr;
        else
            t->right=cr(A[i]);
        i++;
        t=t->right;
    }
    return root;
}