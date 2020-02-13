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
ll gcd(ll a,ll b,ll &x,ll &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll d,x1,y1;
    d=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}
int main(){
    fastio
    #ifndef ONLINE_JUDGE
    fio
    #endif
    ll a,b,c,d,x,y;
        cin>>a>>b>>c;   
        d=gcd(a,b,x,y);
        x*=(c/d);
        y*=(c/d);
        if(c%d==0 && (x>=0 || y>=0)){
            if(x>=0 && y>=0)
                cout<<"Yes\n";
            else{
                ll x1,x2;
                if(x<0){
                    x1=ceil(float(-x)*d/b);
                    x2=floor(float(y)*d/a);
                }
                else{
                    x1=ceil(float(-y)*d/a);
                    x2=floor(float(x)*d/b);
                }
                if(x1>x2)
                cout<<"No\n";
                else
                cout<<"Yes\n";
            }
        }
        else
            cout<<"No\n";
}
