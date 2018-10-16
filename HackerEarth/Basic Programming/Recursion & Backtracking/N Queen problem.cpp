#include<iostream>
using namespace std;

bool isattacked(int board[10][10],int x,int y,int size){
	if(board[x][y]==1)
		return 1;
	for(int i=0;i<size;i++){
		if(board[x][i] || board[i][y])
			return 1;
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(((i+j)==(x+y) || (i-j)==(x-y)) && board[i][j])
				return 1;
		}
	}
	return 0;
}

bool NQ(int board[10][10],int n,int size){
	if(n==0)
		return 1;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(!isattacked(board,i,j,size)){
				board[i][j]=1;
				if(NQ(board,n-1,size))
					return 1;
				else{
					board[i][j]=0;
				}
			}
		}
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	int board[10][10]={};
	if(NQ(board,n,n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<' ';
			}
			cout<<endl;
		}
	}
	else
		cout<<0;

	return 0;
}