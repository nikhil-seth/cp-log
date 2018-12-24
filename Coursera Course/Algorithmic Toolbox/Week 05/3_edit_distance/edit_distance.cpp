#include <iostream>
#include <string>

using namespace std;
int dp[101][101];
int init(int row,int col){
	for(int i=0;i<=row;i++)
		dp[i][0]=i;
	for(int i=0;i<=col;i++)
		dp[0][i]=i;
}
int edit_distance(const string &str1, const string &str2) {
	int m=str1.size(),n=str2.size();
	init(m,n);
	int ins,del,ma,nma;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			ins=dp[i-1][j]+1;
			del=dp[i][j-1]+1;
			ma=dp[i-1][j-1];
			nma=dp[i-1][j-1]+1;
			if(str1[i-1]==str2[j-1])
				dp[i][j]=min(ins,min(del,ma));
			else
				dp[i][j]=min(ins,min(del,nma));
		}
	}
	/*for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++)
			cout<<dp[i][j]<<' ';
		cout<<endl;
	}*/
	return dp[m][n];
}
int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
