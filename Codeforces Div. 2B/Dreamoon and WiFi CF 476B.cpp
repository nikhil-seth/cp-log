#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int correct_ctr=0;
LL fn(string s,int posn,int i,int k){
	if(i==s.length()){
		if(k==posn)
			correct_ctr++;
		return 1;
	}
	if(s[i]=='+')
		return fn(s,posn+1,i+1,k);
	else if(s[i]=='-')
		return fn(s,posn-1,i+1,k);
	else
		return fn(s,posn+1,i+1,k) + fn(s,posn-1,i+1,k);
}
int main(){
	fastio
	//fio
	string s1,s2;
	cin>>s1>>s2;
	int k=0;
	for(int i=0;i<s1.length();i++){
		if(s1[i]=='+')
			k+=1;
		else
			k-=1;
	}
	LL x;
	x=fn(s2,0,0,k);
	cout<<fixed<<setprecision(9);
	long double d;
	d=x;
	d=correct_ctr/d;
	cout<<d;
}
