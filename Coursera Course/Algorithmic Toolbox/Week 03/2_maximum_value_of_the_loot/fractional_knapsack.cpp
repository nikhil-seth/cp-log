#include <bits/stdc++.h>
using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  int n=weights.size();
  vector<pair<double,int>> vw(n);
  for(int i=0;i<n;i++){
  vw[i]=make_pair(double(values[i])/weights[i],weights[i]);
}
  sort(vw.begin(),vw.end());
  for(int i=n-1;i>=0 && capacity>0;i--){
      if(vw[i].second>capacity){
        value+=double(vw[i].first)*capacity;
        capacity=0;
      }
      else{
        value+=(vw[i].first*vw[i].second);
        capacity-=vw[i].second;
      }
  }
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
