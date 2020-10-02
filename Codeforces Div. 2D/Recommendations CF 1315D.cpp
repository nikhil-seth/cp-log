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
bool cmp(const pair<ll,ll> &p1,const pair<ll,ll> &p2){
    if(p1.first==p2.first)
        return p1.second>p2.second;
    return p1.first<p2.first;
}
int main(){
    fastio
    ll t,n;
    cin>>n;
    pair<ll,ll> p[n];
    FOR(i,0,n-1){
        cin>>p[i].first;
    }
    FOR(i,0,n-1){
        cin>>p[i].second;
    }
    priority_queue<ll> pq;
    sort(p,p+n);
    ll tt=0,id=0;
    ll sum=0;
    for(int i=0,j;i<n;i+=1){
        while(id<p[i].first && !pq.empty()){
            ++id;
            sum-=pq.top();
            pq.pop();
            tt+=sum;
        }
        id=p[i].first;
        pq.push(p[i].second);
        sum+=p[i].second;
    }
    while(!pq.empty()){
        sum-=pq.top();
        pq.pop();
        tt+=sum;
    }
    cout<<tt<<endl;
}