#include <iostream>
#include <vector>

using namespace std;

bool partition3(vector<int> &A) {
	int sum=0,size=A.size();
	for(auto &x:A)
		sum+=x;
	if(sum%3!=0)
		return 0;
	bool dp[sum/3+1][size+1];

	for(int i=0;i<=size;i++)
		dp[0][i]=true;
	for(int i=0;i<=sum/3;i++)
		dp[i][0]=false;

	for(int i=1;i<=sum/3;i++){
		for(int j=1;j<=size;j++){
			dp[i][j]=dp[i][j-1];
			if(i>=A[j-1]){
				dp[i][j]=(dp[i][j] || dp[i-A[j-1]][j-1]);
			}
		}
	}

	return dp[sum/3][size];
}
int main() {
  int n;
  std::cin >> n;
  vector<int> A(n);
  for (size_t i = 0; i < A.size(); ++i) {
    std::cin >> A[i];
  }
  std::cout << partition3(A) << '\n';
}
