//Make Binary Tree From Linked List
// https://practice.geeksforgeeks.org/problems/make-binary-tree/1
void convert(Node *head, TreeNode *&root) {
    TreeNode *temp=nullptr,*t2;
    if(!head)
        return;
    queue<TreeNode*> q;
    root=temp=new TreeNode(head->data);
    q.push(temp);
    head=head->next;
    while(head!=nullptr){
        temp=q.front();
        q.pop();
        t2=new TreeNode(head->data);
        temp->left=t2;
        head=head->next;
        q.push(t2);
        if(head){
            t2=new TreeNode(head->data);
            temp->right=t2;
            head=head->next;
            q.push(t2);
        }
    }
}