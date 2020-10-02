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
    ll t;
    cin>>t;
    ll arr[3];
    while(t--){
        FOR(i,0,2) cin>>arr[i];
        sort(arr,arr+3);
        arr[0]=min(arr[0],4LL);
        if(arr[0]>2)
            cout<<arr[0]+3;
        else if(arr[0]==2){
            if(arr[2]==2)
                cout<<4;
            else
                cout<<5;
        }
        else if(arr[0]==1){
            if(arr[1]==1)
                cout<<3;
            else
                cout<<4;
        }
        else{
            if(arr[1]==1)
                cout<<2;
            else if(arr[1]>=2)
                cout<<3;
            else{
                if(arr[2]==0)
                    cout<<0;
                else
                    cout<<1;
            }
        }
        cout<<endl;
    }
}