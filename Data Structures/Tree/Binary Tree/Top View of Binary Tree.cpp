// Top View of Binary Tree
// Link : https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
using namespace std;

void topView(struct Node *root){
    set<int> v;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    pair<Node*,int> p;
    while(!q.empty()){
        p=q.front();
        q.pop();
        if(v.find(p.second)==v.end()){
            v.insert(p.second);
            cout<<p.first->data<<' ';
        }
        if(p.first->left)
           q.push(make_pair(p.first->left,p.second-1));
        if(p.first->right)
           q.push(make_pair(p.first->right,p.second+1));
    }
}
