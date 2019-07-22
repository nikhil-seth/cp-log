//https://practice.geeksforgeeks.org/problems/huffman-encoding/0
// Huffman Encoding
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
struct Node{
    char data;
    int freq;
    Node *left,*right;
};
struct compare  
 {  
   bool operator()(Node *a,Node *b){
        return a->freq>b->freq;
    }
};
void fn(Node *root,string x){
    if(!root)
        return;
    if(!root->left && !root->right){
        cout<<x<<' ';
        return;
    }
    x.pb('0');
    fn(root->left,x);
    x.pop_back();
    x.push_back('1');
    fn(root->right,x);
    x.pop_back();
}
int main(){
    int t,x;
    cin>>t;
    while(t--){
        string s,s2;
        cin>>s;
        Node *nn,*a,*b;
        priority_queue<Node*,vector<Node*>,compare> pq;
        for(int i=0;i<s.length();i++){
            nn=new Node;
            cin>>x;
            nn->data=s[i];
            nn->freq=x;
            nn->left=nn->right=nullptr;
            pq.push(nn);
        }
        while(pq.size()!=1){
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            nn=new Node;
            nn->freq=a->freq+b->freq;
            nn->left=a;
            nn->right=b;
            pq.push(nn);
        }
        string x;
        fn(pq.top(),x);
        cout<<endl;
    }
}
