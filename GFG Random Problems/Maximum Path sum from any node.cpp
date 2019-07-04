// Maximum path sum from any node
// https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1
int fn(Node* root,int &val){
    if(!root)
        return 0;
    int a,b,c;
    a=fn(root->left,val);
    b=fn(root->right,val);
    c=a+b+root->data;
    if(c>val)
        val=c;
    if(root->data>val)
        val=root->data;
    if(a+root->data>val)
        val=a+root->data;
    if(b+root->data>val)
        val=b+root->data;
    return max(root->data,max(a,b)+root->data);
}
int findMaxSum(Node* root){
    if(!root)
        return 0;
    int val=root->data;
    fn(root,val);
    if(val>root->data)
        return val;
    return root->data;
}