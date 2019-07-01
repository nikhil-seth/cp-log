// https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1/?ref=self
// Min distance between two given nodes of a Binary Tree
int fn(Node* root,int a,int b,int &found){
    if(!root)
        return -1;
    int x,y;
    x=fn(root->left,a,b,found);
    y=fn(root->right,a,b,found);
    if(found==1)    // If element is found beforehand.
        return max(x,y);
    if(x>0 && y>0){
         found=1;
         return x+y;
    }
    if(root->data==a && root->data==b){
        found=1;
        return 0;
    }
    if(root->data==a || root->data==b){ // found here.
        if(x>0 || y>0){ // Inpe bhi node h.
            found=1;
            return max(x,y);
        }
        return 1;
    }
    if(x>0 || y>0)
        return max(x,y)+1;
    return -1;
}
int findDist(Node* root, int a, int b)
{
    int f=0;
    return fn(root,a,b,f);
}