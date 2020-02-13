#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
ll gcd(ll a,ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main(){
    fastio
    #ifndef ONLINE_JUDGE
    fio
    #endif
    ll t;
    
    scanf("%lld",&t);
    while(t--){
        ll a,b,c,d;
        scanf("%lld%lld",&a,&b);
        d=gcd(a,b);
        c=a*b-a-b+1;
        if(d==1)
            printf("%lld\n",c);
        else
            printf("-1\n");
    }
}