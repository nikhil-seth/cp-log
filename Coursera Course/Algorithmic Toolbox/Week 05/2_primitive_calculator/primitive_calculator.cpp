#include <bits/stdc++.h>
using namespace std;
vector<int> optimal_sequence(vector<vector<int>> dp,int n) {
  vector<int> sequence;
  if(n==0)
    return sequence;
  if(dp[n].size()!=0)
    return dp[n];
  vector<int> a,b;
  a=optimal_sequence(dp,n-1);
  if(n%2==0){
    b=optimal_sequence(dp,n/2);
    if(b.size()<a.size())
      a=b;
  }
  if(n%3==0){
    b=optimal_sequence(dp,n/3);
    if(b.size()<a.size())
      a=b;
  }
  a.push_back(n);
  dp.push_back(a);
  return dp[n];
}
int main() {
  int n;
  cin >> n;
  vector<vector<int>> dp;
  vector<int> v;
  dp.push_back(v);
  v.push_back(1);
  dp.push_back(v);
  for(int i=2;i<=n;i++)
    optimal_sequence(dp,i);
  std::cout << dp[n].size() - 1 << std::endl;
  for (size_t i = 0; i < dp[n].size(); ++i) {
    std::cout << dp[n][i] << " ";
  }
  return 0;
}
