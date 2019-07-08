#include<bits/stdc++.h>
using namespace std;

class DSet{
	// Disjoint set with fast Union slow find.
private:
	int *parent;
	int n;
public:
	DSet(int n){
		parent=new int[n];
		n=n;
	}
	void makeset(){
		for(int v=0;v<n;v++)
			parent[v]=v;
	}
	int findset(int x){
		if(x<0 || x>=n)
			return -1;
		if(parent[x]==x)
			return x;
		return findset(parent[x]);
	}
	bool issameset(int x,int y){
		int a,b;
		a=findset(x);
		b=findset(y);
		if(a==b || a==-1 ||b==-1)
			return 1;
		return 0;
	}
	void UNION(int x,int y){
		int a,b;
		a=findset(x);
		b=findset(y);
		if(a==-1 || b==-1 || a==b)
			return;
		parent[a]=b;
	}
};
int main(){
	return 0;
}