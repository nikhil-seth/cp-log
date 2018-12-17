

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


    void postOrder(Node *root) {
        stack <Node *> S;
        Node *prev;
        do{
            while(root!=nullptr){
                S.push(root);
                root=root->left;
            }
            while(root==nullptr && !S.empty()){
                root=S.top();
                if(root->right==nullptr || root->right==prev){
                    cout<<root->data<<' ';
                    prev=root;
                    root=nullptr;
                    S.pop();
                }
                else{
                    root=root->right;
                }
            }
        }while(!S.empty());
    }

