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
class pt{
public:
	int x;
	int y;
	bool killed;
	pt(){

	}
	pt(int a,int b){
		x=a;
		y=b;
		killed=0;
	}
	void fn(pt &a,pt &b){
		if(((b.y-a.y)*(b.x-x))==((b.y-y)*(b.x-a.x)))
			killed=1;
	}
};
int main(){
	fastio
	//fio
	int n;
	cin>>n;
	pt obj[n],gun;
	int x,y,ctr=0;
	cin>>x>>y;
	gun=pt(x,y);
	for(int i=0;i<n;i++){
		cin>>x>>y;
		obj[i]=pt(x,y);
	}
	for(int i=0;i<n;i++){
		if(obj[i].killed==0){
			obj[i].killed=1;
			ctr++;
			for(int j=i+1;j<n;j++){
				obj[j].fn(obj[i],gun);
			}
		}
	}
	cout<<ctr;
}