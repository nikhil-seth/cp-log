#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n;
	cin>>n;
	int arr[n];
	bool taken[n],given[n];
	memset(given,0,sizeof(given));
	memset(taken,0,sizeof(taken));
	FOR(i,0,n-1){
		cin>>arr[i];
		if(arr[i]!=0){	//given to somebody
			given[i]=1;
			taken[arr[i]-1]=1;
		}
	}

	vector<int> v1,v2,v3;
	FOR(i,0,n-1){
		if(!taken[i] && !given[i])
			v1.pb(i);
		if(taken[i] && !given[i])
			v2.pb(i);
		if(!taken[i] && given[i])
			v3.pb(i);
	}
	//cout<<v1.size()<<' '<<v2.size()<<' '<<v3.size()<<endl;
	
	int i=0,j=0,k=0;
	if(v2.size()!=0){
		for(;i<v1.size();i++,k++){
			arr[v1[i]]=v3[k]+1;
			v3.pb(v1[i]);
		}
		for(;j<v2.size() && k<v3.size(); j++,k++){
			arr[v2[j]]=v3[k]+1;
		}
	}
	else{
		while(v1.size()-j>3){
			arr[v1[j]]=v1[j+1]+1;
			arr[v1[j+1]]=v1[j]+1;
			j+=2;
		}	
		if(v1.size()-j==3){
			arr[v1[j]]=v1[j+1]+1;
			arr[v1[j+1]]=v1[j+2]+1;
			arr[v1[j+2]]=v1[j]+1;
		}
		else if(v1.size()-j==2){
			arr[v1[j]]=v1[j+1]+1;
			arr[v1[j+1]]=v1[j]+1;
		}
	}
	FOR(i,0,n-1)
		cout<<arr[i]<<' ';
}
