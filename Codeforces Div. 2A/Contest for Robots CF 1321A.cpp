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
    ll n;
    cin>>n;
    ll c1,c2,c3;
    c1=0,c2=0,c3=0;
    ll arr[n];
    FORA(x,arr) cin>>x;
    ll x;
    FOR(i,0,n-1){
        cin>>x;
        if(x==1 && arr[i]==1)
            c2+=1;
        else if(x==1)
            c3+=1;
        else if(arr[i]==1)
            c1+=1;
    }
    if(c1==0)
        cout<<-1;
    else{
        cout<<(c3/c1)+1;
    }
}
