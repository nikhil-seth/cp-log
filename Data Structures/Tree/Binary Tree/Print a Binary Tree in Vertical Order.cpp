// Find Optimum operation
// Link : https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

void iod(Node *root,map<int,vector<int>> &m,int k){
    if(root==nullptr)
        return;
    m[k].push_back(root->data);
    iod(root->left,m,k-1);
    iod(root->right,m,k+1);
}
void verticalOrder(Node *root){
    map<int,vector<int>> m;
    iod(root,m,0);
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        vector<int> v=it->second;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<' ';
        }
    }
}