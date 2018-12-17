

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void inOrder(Node *root) {
        stack <Node *> S;
        while(1){
            while(root!=nullptr){
                S.push(root);
                root=root->left;
            }
            if(S.empty())
                break;
            root=S.top();
            cout<<root->data<<' ';
            root=root->right;
            S.pop();
        }
    }

