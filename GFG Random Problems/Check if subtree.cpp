// https://practice.geeksforgeeks.org/problems/check-if-subtree/1
// Check if subtree
#include<string>

void iot(Node *x,string &s){
    if(!x)
        s.push_back('$');
    else{
        iot(x->left,s);
        s.push_back(x->data);
        iot(x->right,s);
    }
}
void pre(Node *x,string &s){
    if(!x)
        s.push_back('$');
    else{
        s.push_back(x->data);
        pre(x->left,s);
        pre(x->right,s);
    }
}
bool isSubtree(Node* T1, Node* T2) {
    string i1,i2,p1,p2;
    iot(T1,i1);
    iot(T2,i2);
    pre(T1,p1);
    pre(T2,p2);
    if(!T2)
        return 1;
    if(!T1)
        return 0;
    if(p1.find(p2)==string::npos)
        return 0;
    return i1.find(i2)!=string::npos;
}
