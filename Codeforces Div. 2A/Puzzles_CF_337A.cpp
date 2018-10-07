// Link to problem :http://codeforces.com/problemset/problem/337/A
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
	int n,m ,f[1000],i=0;
	cin>>n>>m;
	while(i<m){
		cin>>f[i++];
	}
	sort(f,f+m);
	int least=f[n-1]-f[0];
	for(i=1;i<=(m-n);i++){
		if((f[i+n-1]-f[i])<least){
			least=f[i+n-1]-f[i];
		}
	}
	cout<<least;
	return 0;
}
