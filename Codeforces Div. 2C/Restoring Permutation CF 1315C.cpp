#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
    fastio
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll b[n];
        bool f=0;
        vector<bool> vis(2*n+1,0);
        FOR(i,0,n-1){
            cin>>b[i];
            vis[b[i]]=1;
        }
        int j=1;
        ll arr[2*n],id=0;
        FOR(i,0,n-1){
            j=b[i];
            while(j<=2*n && vis[j]) j+=1;
            if(j==2*n+1){
                f=1;
                break;
            }
            else{
                arr[id++]=b[i];
                arr[id++]=j;
                vis[j]=1;
            }
        }
        if(f)
            cout<<-1;
        else{
            FOR(i,0,2*n-1)
                cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
}
