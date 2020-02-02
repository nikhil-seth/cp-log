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
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		int i,j;
		j=n-1;
		while(j>=0){
			if(s[j]%2!=0)
				break;
			j--;
		}
		int ctrodd=0,odd=-1;
		FOR(k,0,j-1){
			if(s[k]%2!=0){
				ctrodd++;
				odd=k;
			}
		}
		ctrodd++;
		if(ctrodd%2==0){
			for(int i=0;i<=j;i++)
				cout<<s[i];
			cout<<endl;
		}
		else if(odd!=-1){
			for(int i=0;i<=j;i++){
				if(i==odd)
					continue;
				cout<<s[i];
			}
			cout<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}