// https://practice.geeksforgeeks.org/problems/clone-a-binary-tree/1
// Clone a Binary Tree.
Node* create(int t){
    Node *temp=(Node*)malloc(sizeof(Node));
    temp->left=nullptr;
    temp->right=nullptr;
    temp->data=t;
    return temp;
}
Node* cloneTree(Node* tree)
{
    if(!tree)
        return nullptr;
    if(!tree->left && !tree->right){ // Only Tree exists.
        Node *temp=create(tree->data);
        temp->random=tree->random;
        return temp;
    }
    stack<Node*> S;
    Node *head,*temp,*q;
    temp=tree;
    while(1){
        while(temp){
            q=create(temp->data);
            q->random=temp->random;
            temp->random=q;
            S.push(temp);
            temp=temp->left;
        }
        if(S.empty())
            break;
        temp=S.top();
        temp=temp->right;
        S.pop();
    }
    temp=tree;
    head=tree->random;
    while(1){
        while(temp){
            if(temp->left)
                temp->random->left=temp->left->random;
            if(temp->right)
                temp->random->right=temp->right->random;
            temp->random=temp->random->random;
            S.push(temp);
            temp=temp->left;
        }
        if(S.empty())
            break;
        temp=S.top();
        temp=temp->right;
        S.pop();
    }
    return head;
}