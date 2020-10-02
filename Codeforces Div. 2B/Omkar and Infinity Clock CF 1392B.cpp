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
void fn(ll arr[],int n,int m){
    FOR(i,0,n-1)
        arr[i]=m-arr[i];
}
int main(){
    fastio
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll arr[n];
        ll ma,mi;
        ma=LONG_MIN,mi=LONG_MAX;
        FORA(x,arr){
            cin>>x;
            ma=max(ma,x);
            mi=min(mi,x);
        }
        k%=2;
        fn(arr,n,ma);
        if(!k)
            fn(arr,n,ma-mi);
        FORA(x,arr)
            cout<<x<<' ';
        cout<<endl;
    }
}