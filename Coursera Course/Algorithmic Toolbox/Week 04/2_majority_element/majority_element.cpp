#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return 0;
  if (left + 1 == right) return a[left];
  int mid=left+(right-left)/2;
  int ta,tb,ctra=0,ctrb=0;
  ta=get_majority_element(a,left,mid);
  tb=get_majority_element(a,mid,right);
  if(ta==-1 && tb==-1)
    return -1;
  for(int i=left;i<right;i++){
    if(a[i]==ta)
        ctra++;
    else if(a[i]==tb)
      ctrb++;
  }
  if(ctra>((right-left)/2))
    return ta;
  else if(ctrb>((right-left)/2))
    return tb;
  return -1;
}
int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
