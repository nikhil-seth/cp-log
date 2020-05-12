// Number of Turns in Binary Tree
// https://practice.geeksforgeeks.org/problems/number-of-turns-in-binary-tree/1
int ans=-1;
pair<Node*,int> lca(Node *root,bool &d1,bool &d2,int f,int s,bool d){
    if(!root)
        return {nullptr,0};
    if(root->data==f){
        d1=1;
        return {root,0};
    }
    if(root->data==s){
        d2=1;
        return {root,0};
    }
    pair<Node*,int> pa,pb;
    pa=lca(root->left,d1,d2,f,s,0);
    pb=lca(root->right,d1,d2,f,s,1);
    if(pa.first && pb.first){
        ans=pa.second+pb.second+1;
        return {root,pa.second+pb.second+1};
    }
    if(pa.first){
        pa.second+=d^0;
        return pa;
    }
    if(pb.first){
        pb.second+=d^1;
        return pb;
    }
    return {nullptr,0};
}
int cr(Node *root,int val,bool dir){
    if(!root)
        return -1;
    if(root->data==val)
        return 0;
    int x=cr(root->left,val,0);
    if(x!=-1)
        return x+dir^0;
    x=cr(root->right,val,1);
    if(x!=-1)
        return x+dir^1;
    return -1;
}
int NumberOFTurns(struct Node* root, int first, int second){
    pair<Node*,int> p;
    bool d1,d2,d;
    d1=d2=d=0;
    int tx=-1;
    p=lca(root,d1,d2,first,second,d);
    if(d1 && d2)
        return ans;
    else if(d1){
        tx=cr(p.first->left,second,0);
        if(tx==-1)
            tx=cr(p.first->right,second,1);
    }
    else if(d2 && tx==-1){
        tx=cr(p.first->left,first,0);
        if(tx==-1)
            tx=cr(p.first->right,first,1);
    }
    if(tx==0)
        return -1;
    return tx;
}
