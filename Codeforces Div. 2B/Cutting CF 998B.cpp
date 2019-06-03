#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define pi 3.14159265359
using namespace std;
int fn(vector<long> arr,int b,int k){
	if(k==arr.size())
		return 0;
	int res=fn(arr,b,k+1);
	if(b>=arr[k])
		res=max(res,fn(arr,b-arr[k],k+1)+1);
	return res;
}
int main(){
	fastio
	//fio
	int n,b;
	cin>>n>>b;
	int even=0,odd=0,x,px;
	vector<long> arr;
	cin>>px;
	if(px%2==0)
		even++;
	else
		odd++;
	FOR(i,1,n-1){
		cin>>x;
		if(odd==even)
			arr.pb(abs(x-px));
		if(x%2==0)	//even
			even++;
		else
			odd++;
		px=x;
	}
	sort(arr.begin(),arr.end());
	int ctr=0;
	int val=b;
	for(int i=0;i<arr.size() && val>=0;i++){
		if(val>=arr[i]){
			val-=arr[i];
			ctr++;
		}
		else
			break;
	}
	cout<<ctr;
}