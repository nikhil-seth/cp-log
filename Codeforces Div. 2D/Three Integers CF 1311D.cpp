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
    ll t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        ll aA,aB,aC;
        ll ans=LONG_MAX;
        FOR(i,1,2*a){
            for(ll j=i;j<=2*b;j+=i){
                ll val,x=(c/j)*j;
                val=abs(a-i)+abs(b-j)+abs(c-x);
                if(val<=ans){
                    ans=val;
                    aA=i,aB=j,aC=x;
                }
                x=(c/j)*j+j;
                if(x>=j){
                    val=abs(a-i)+abs(b-j)+abs(c-x);
                    if(val<=ans){
                        ans=val;
                        aA=i,aB=j,aC=x;
                    }
                }
            }
        }
        cout<<ans<<endl;
        cout<<aA<<' '<<aB<<' '<<aC<<endl;
    }
}