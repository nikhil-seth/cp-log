#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
    fastio
    fio
    int t;
    int n,x,k;
    cin>>t;
    while(t--){
        cin>>n;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
        	cin>>x;
        	if(x<0)
        		q.push(make_pair(x,i));
        }
        cin>>k;
        for(int i=0;i<=n-k;i++){
        	if(!q.empty() && q.front().second==i){
        		cout<<q.front().first<<' ';
        		q.pop();
        	}
        	else if(!q.empty() && q.front().second<i+k){
        		cout<<q.front().first<<' ';
        	}
        	else{
        		cout<<0<<' ';
        	}
        }
        cout<<endl;
    }
}

