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
    ll arr[n];
    FOR(i,0,n-1){
        cin>>arr[i];
    }
    stack<int> s,s2;
    ll dp1[n],dp2[n];
    FOR(i,0,n-1){
        while(!s.empty() && arr[s.top()]>arr[i])
            s.pop();
        if(s.empty()){
            dp1[i]=arr[i]*(i+1);
        }
        else 
            dp1[i]=arr[i]*(i-s.top()) + dp1[s.top()];
        s.push(i);
        //cout<<dp1[i]<<' ';
    }
    //cout<<endl;
    while(!s.empty())
        s.pop();
    for(int i=n-1;i>=0;i-=1){
        while(!s.empty() && arr[s.top()]>arr[i])
            s.pop();
        if(s.empty()){
            dp2[i]=arr[i]*(n-i);
        }
        else 
            dp2[i]=arr[i]*(s.top()-i)+dp2[s.top()];
        //cout<<dp2[i]<<' ';
        s.push(i);
    }
    ll id=0;
    FOR(i,0,n-1){
        if(dp1[i]+dp2[i]-arr[i]>dp1[id]+dp2[id]-arr[id])
            id=i;
    }
    //cout<<id<<endl;
    FOR(i,id+1,n-1)
        arr[i]=min(arr[i],arr[i-1]);
    for(int i=id-1;i>=0;i-=1)
        arr[i]=min(arr[i],arr[i+1]);
    FOR(i,0,n-1)
        cout<<arr[i]<<' ';
    cout<<endl;
}


