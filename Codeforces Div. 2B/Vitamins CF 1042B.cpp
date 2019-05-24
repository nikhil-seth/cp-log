#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;

int main(){
	fastio
	//fio
	int n;
	cin>>n;
	map<string,long> m;
	long t;
	string s;
	m["ABC"]=m["AB"]=m["BC"]=m["AC"]=m["A"]=m["B"]=m["C"]=300001;
	FOR(i,0,n-1){
		cin>>t>>s;
		if(s=="ABC" || s=="BAC" || s=="ACB" || s=="BCA" || s=="CAB" || s=="CBA")
			m["ABC"]=min(m["ABC"],t);
		else if(s=="AB" || s=="BA")
			m["AB"]=min(m["AB"],t);
		else if(s=="AC" || s=="CA")
			m["AC"]=min(m["AC"],t);
		else if(s=="CB" || s=="BC")
			m["BC"]=min(m["BC"],t);
		else if(s=="A")
			m["A"]=min(m["A"],t);
		else if(s=="B")
			m["B"]=min(m["B"],t);
		else if(s=="C")
			m["C"]=min(m["C"],t);
	}
	long val=300001;
	val=min(val,m["ABC"]);
	val=min(val,m["AB"]+m["C"]);		
	val=min(val,m["BC"]+m["A"]);	
	val=min(val,m["AC"]+m["B"]);	
	val=min(val,m["AB"]+m["AC"]);	
	val=min(val,m["AB"]+m["BC"]);	
	val=min(val,m["AC"]+m["BC"]);	
	val=min(val,m["A"]+m["B"]+m["C"]);	
	if(val==300001)
		val=-1;
	cout<<val;
}

