#include <iostream>
#include <vector>
#include<cmath>
using std::sqrt;

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  long val,i=1;
  while(i*(i+1)/2<=n)
    i++;
  for(int j=1;j<i-1;j++)
    summands.push_back(j);
  summands.push_back(n-((i-1)*(i-2)/2));
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
