#include<bits/stdc++.h>
#define LL long long
using namespace std;
//ios_base::sync_with_stdio(false);
int main(){
	//ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	vector<int> a[27],b[27];
	string s1,s2;
	cin.ignore();
	cin>>s1;
	cin.ignore();
	cin>>s2;
	for(int i=0;i<n;i++){
		if(s1[i]=='?')
			a[26].push_back(i+1);
		else
			a[s1[i]-97].push_back(i+1);
	}
	for(int i=0;i<n;i++){
		if(s2[i]=='?')
			b[26].push_back(i+1);
		else
			b[s2[i]-97].push_back(i+1);
	}
	LL m=0;
	int j,qa=0,qb=0;
	for(int i=0;i<26;i++){
		//cout<<char(i+97)<<a[i].size()<<' '<<b[i].size()<<' '<<qa<<' '<<qb<<' '<<v.size()<<endl;
		m=min(a[i].size(),b[i].size());
		for(j=0;j<m;j++)
			v.push_back(make_pair(a[i][j],b[i][j]));
		while(j<a[i].size() && qb<b[26].size())
			v.push_back(make_pair(a[i][j++],b[26][qb++]));
		while(j<b[i].size() && qa<a[26].size())
			v.push_back(make_pair(a[26][qa++],b[i][j++]));
	}
	while(qa<a[26].size() && qb<b[26].size())
		v.push_back(make_pair(a[26][qa++],b[26][qb++]));
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i].first<<' '<<v[i].second<<endl;
}


