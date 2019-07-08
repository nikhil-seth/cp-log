#include<bits/stdc++.h>
using namespace std;

class DSet{
	// Disjoint set with Union by size.
private:
	int *parent;
	int *size;
	int n;
public:
	DSet(int n){
		parent=new int[n];
		size=new int[n];
		n=n;
	}
	void makeset(){
		for(int v=0;v<n;v++){
			parent[v]=v;
			size[v]=1;
		}
	}
	int findset(int x){
		if(x<0 || x>=n)
			return -1;
		if(parent[x]==x)
			return x;
		return parent[x]=findset(parent[x]);
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
		if(size[a]<size[b])
			swap(a,b);
		// Now a>b always.
		parent[b]=a;
		size[a]+=size[b];
	}
};
int main(){
	return 0;
}