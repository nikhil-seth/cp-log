// Link to Problem : https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/a-tryst-with-chess/
#include <iostream>
#include<cmath>
using namespace std;
int board[10][10]={};

bool condcheck(int x,int y,int n){
	if((x>9 || x<0) || (y>9 || y<0)){
		return 1;
	}
	if(n==0)
		return 1;
	return 0;
}
int step(int board[10][10],int i,int j,int n){
	int k=0;
	if(condcheck(i,j,n))
		return 0;
	if(n==1 && board[i][j]==1)
		return 0;
	else if(n==1 && board[i][j]==0){
		board[i][j]==1;
		k=1;
	}
	
	k+=step(board,i+2,j+1,n-1) + step(board,i+2,j-1,n-1)+ step(board,i-2,j+1,n-1)+step(board,i-2,j-1,n-1);
	k+=step(board,i+1,j+2,n-1)+step(board,i-1,j+2,n-1)+	step(board,i-1,j-2,n-1) +step(board,i+1,j-2,n-1);
	return k;
}
int main()
{   int i,j,n;
	cin>>i>>j>>n;
	if(step(board,i-1,j-1,n+1)>50)
		cout<<50;

	return 0;
}
//cout<<"Test01\n";
//Time Complexity : O(8^n)