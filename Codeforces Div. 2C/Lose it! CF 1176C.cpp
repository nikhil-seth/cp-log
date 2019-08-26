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
int idf(int x){
	if(x==4)
		return 0;
	if(x==8)
		return 1;
	if(x==15)
		return 2;
	if(x==16)
		return 3;
	if(x==23)
		return 4;
	if(x==42)
		return 5;
}
int main(){
	fastio
	//fio
	int n;
	cin>>n;
	int ctr=0,x;
	int arr[6],id;
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++){
		cin>>x;
		id=idf(x);
		if(id==0)
			arr[0]++;
		else{
			if(arr[id-1]>0){
				arr[id-1]--;
				arr[id]++;
			}
			else
				ctr++;
		}
	}
	for(int i=0;i<5;i++)
		ctr+=arr[i]*(i+1);
	cout<<ctr;
}