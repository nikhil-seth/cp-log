#include<iostream>
#include<cstdio>
#include<climits>
#include<algorithm>

using namespace std;

int limit = 1000001,a,b;

int solution(int i,int j,int n,int m) {
	if(i==n and j==m) return 0;
	
	int step,diff_x,diff_y;
	diff_x = abs(n-i);
	diff_y = abs(m-j);
	
	//if(diff_x == diff_y and diff_x == 0) return 0;
	
	if(diff_x%a==0 and diff_y%b==0) {
		if((diff_x/a) % 2 == (diff_y/b) % 2) 
			return max((diff_x/a),(diff_y/b));
	}
	
	return limit;
}

int main() {
	int row,col,x,y,ans=limit;
	
	cin>>row>>col>>x>>y>>a>>b;
	ans = min(ans,solution(x,y,1,1));
	ans = min(ans,solution(x,y,1,col));
	ans = min(ans,solution(x,y,row,col));
	ans = min(ans,solution(x,y,row,1));
	
	if(ans==limit or ((x+a>row and x-a<1) or (y+b>col and y-b<1)) and ans!=0)
		cout<<"Poor Inna and pony!\n";
	else cout<<ans<<'\n';
	
	return 0;
}