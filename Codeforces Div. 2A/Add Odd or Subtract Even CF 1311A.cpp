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
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        bool x1,x2;
        x1=a%2,x2=b%2;
        if(a==b)
            cout<<0;
        else if(a>b){
            if(x1^x2)
                cout<<2;
            else
                cout<<1;
        }
        else{
            if(x1^x2)
                cout<<1;
            else
                cout<<2;
        }
        cout<<endl;
    }
}
