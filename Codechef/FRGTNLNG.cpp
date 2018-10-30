#include<bits/stdc++.h>
#include<string>
using namespace std;
void check(string dict[],bool val[],int n,string s){
	for(int i=0;i<n;i++){
		if(s.compare(dict[i])==0){
			val[i]=1;
			return;
		}
	}
}
int main(){
	int t,n,k,tep;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string dict[n],s;
		bool val[n]={};
		for(auto &x:dict)
			cin>>x;
		vector<string> vec;
		while(k--){
			cin>>tep;
			while(tep--){
				cin>>s;
				check(dict,val,n,s);
			}
		}
		for(int i=0;i<n;i++){
			if(val[i])
				cout<<"YES ";
			else
				cout<<"NO ";
		}
		cout<<endl;
	}
}