#include <iostream>
#include <vector>

using std::vector;

int optimal_weight(int W, const vector<int> &w) {
	int s=w.size();
	int *dp[s+1];
	for(int i=0;i<=s;i++)
		dp[i]=new int[(W+1)];
	for(int i=0;i<=W;i++)
		dp[0][i]=0;
	for(int i=0;i<=s;i++)
		dp[i][0]=0;

	for(int i=1;i<=s;i++){
		for(int j=1;j<=W;j++){
			dp[i][j]=dp[i-1][j];
			if(w[i-1]<=j){
				int val=dp[i-1][j-w[i-1]]+w[i-1];
				if(val>dp[i][j])
					dp[i][j]=val;
			}
		}
	}
	int t=dp[s][W];
	for(int i=0;i<=s;i++)
		delete[] dp[i];
	return t;
}
int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}
