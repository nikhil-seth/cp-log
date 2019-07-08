#include<bits/stdc++.h>
using namespace std;

class DSet{
	// Disjoint set with Union by size.
private:
	int *parent;
	int *height;
	int n;
public:
	DSet(int n){
		parent=new int[n];
		height=new int[n];
		n=n;
	}
	void makeset(){
		for(int v=0;v<n;v++){
			parent[v]=v;
			height[v]=0;
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
		if(height[a]<height[b])
			swap(a,b);
		// Now a>b always.
		parent[b]=a;// A is parent of b.
		if(height[a]==height[b])
			height[a]++;
	}
};
int main(){
	return 0;
}