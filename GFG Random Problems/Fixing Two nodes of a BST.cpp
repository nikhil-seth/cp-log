// https://practice.geeksforgeeks.org/problems/fixed-two-nodes-of-a-bst/1
//Fixing Two nodes of a BST
Node *correctBST( struct Node* x ){
    // DO IOT aur usme swap milega.
    if(!x)
        return nullptr;
    Node *prev,*ptr1,*ptr2,*ptr3,*root;
    root=x;
    prev=ptr1=ptr2=ptr3=nullptr;
    stack<Node*> S;
    while(1){
        while(root){
            S.push(root);
            root=root->left;
        }
        if(S.empty())
            break;
        root=S.top();
        //cout<<root->data<<endl;
        S.pop();
        if(!ptr1 && prev && root->data<prev->data){
            //cout<<"ptr1"<<root->data<<endl;
            ptr1=prev;
            ptr2=root;
        }
        else if(ptr1 && !ptr3 && prev && root->data<prev->data){
            //cout<<"ptr2"<<root->data<<endl;
            ptr3=prev;
        }
        prev=root;
        root=root->right;
    }
    if(ptr3==nullptr){
        int t=ptr2->data;
        ptr2->data=ptr1->data;
        ptr1->data=t;
    }
    else{
        int t=ptr1->data;
        ptr1->data=ptr3->data;
        ptr3->data=t;
    }
    return x;
}
