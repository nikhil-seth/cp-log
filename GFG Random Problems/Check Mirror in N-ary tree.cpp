//https://practice.geeksforgeeks.org/problems/check-mirror-in-n-ary-tree/0
// Check Mirror in N-ary tree
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) for(auto &(x):(arr))
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,e,a,b;
        cin>>n>>e;
        vector<int> adj1[n],adj2[n];
        for(int i=0;i<e;i++){
            cin>>a>>b;
            adj1[a-1].pb(b-1);
        }
        for(int i=0;i<e;i++){
            cin>>a>>b;
            adj2[a-1].pb(b-1);
        }
        int res=1;
        for(int i=0;i<n && res;i++){
            if(adj1[i].size()!=adj2[i].size()){
                res=0;
                break;
            }
            for(int j=0,k=adj1[i].size()-1;j<=k;j++,k--){
                if(adj1[i][j]!=adj2[i][k]){
                    res=0;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
}