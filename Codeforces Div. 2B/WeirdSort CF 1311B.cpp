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
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll arr[n];
        FORA(x,arr) cin>>x;
        ll brr[m];
        FORA(x,brr){
            cin>>x;
            x-=1;
        }
        sort(brr,brr+m);
        int si,ei;
        for(int i=0;i<m;){
            si=ei=brr[i];
            //cout<<si<<endl;
            while(brr[i]==ei)
                i+=1,ei+=1;
            //cout<<si<<' '<<ei<<endl;
            sort(arr+si,arr+ei+1);
        }
        bool f=0;
        FOR(i,0,n-2){
            if(arr[i]>arr[i+1]){
                f=1;
                break;
            }
        }
        if(f)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}