
/*
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

    void levelOrder(Node * root) {
        queue <Node*> Q;
        Node *temp;
        if(root)
            Q.push(root);
        while(!Q.empty()){
          temp = Q.front();
          Q.pop();
          if (temp == nullptr)
                continue;
            cout<<temp->data<<' ';
            Q.push(temp->left);
            Q.push(temp->right);
        }
    }
    
