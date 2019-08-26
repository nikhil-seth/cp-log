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
	fastio
	//fio
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	FOR(i,0,n-1){
		FOR(j,0,m-1){
			cin>>arr[i][j];
		}
	}
	int brr[n][m],k=0;
	memset(brr,0,sizeof(brr));
	vector<pair<int,int>> v;
	for(int i=0;i<n-1;i++){	
		for(int j=0;j<m-1 && k<2500;j++){
			if(arr[i][j] && arr[i+1][j+1] && arr[i][j+1] && arr[i+1][j]){
				brr[i][j]=brr[i][j+1]=brr[i+1][j+1]=brr[i+1][j]=1;
				k++;
				v.pb(make_pair(i+1,j+1));
			}
		}
	}
	FOR(i,0,n-1){
		FOR(j,0,m-1){
			if(arr[i][j]!=brr[i][j]){
				k=2500;
				break;
			}
		}
	}
	if(k==2500){
		cout<<-1;
		return 0;
	}
	cout<<k<<endl;
	for(auto u:v){
		cout<<u.first<<' '<<u.second<<endl;
	}
}
