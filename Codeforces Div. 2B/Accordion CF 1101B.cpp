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
	int n;
	string s;
	cin>>s;
	int i=0,j=n-1,k,l;
	n=s.length();
	while(i<n){
		if(s[i]!=91)
			i++;
		else
			break;
	}
	j=i+1;
	while(j<n){
		if(s[j]!=58)
			j++;
		else
			break;
	}
	k=n-1;
	while(k>=0){
		if(s[k]!=93)
			k--;
		else
			break;
	}
	l=k-1;
	while(l>=0){
		if(s[l]!=58)
			l--;
		else
			break;
	}
	if(l<=j)
		cout<<-1<<endl;
	else{
		int ctr=0;
		for(int qt=j+1;qt<l;qt++){
			if(s[qt]!=124)
				ctr++;
		}
		cout<<(l-j-ctr+3);
	}
}
