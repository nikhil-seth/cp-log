#include <iostream>
int get_change(int m,int dp[]) {
	if(m==0)
		return 0;
	if(dp[m]!=-1)
		return dp[m];
	dp[m]=std::min(get_change(m-1,dp)+1,std::min(get_change(m-3,dp)+1,get_change(m-4,dp)+1));
	return dp[m];
}

int main() {
  int m;
  std::cin >> m;
  int dp[m+1];
  for(auto &x:dp)
  	x=-1;
  dp[1]=1;

  std::cout << get_change(m,dp) << '\n';
}
