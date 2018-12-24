#include <iostream>
#include <vector>

using std::vector;

long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) {
  long long number_of_inversions = 0;
  if (right <= left + 1) return number_of_inversions;
  size_t ave = left + (right - left) / 2;
  number_of_inversions += get_number_of_inversions(a, b, left, ave);
  number_of_inversions += get_number_of_inversions(a, b, ave, right);
  auto i=left,k=ave,j=left;
  while(i<right && j<ave && k<right){
    if(a[j]>a[k]){
      number_of_inversions+=(ave-j);
      b[i]=a[k];
      k++;
    }
    else
      b[i]=a[j++];
    i++;
  }
  while(j<ave)
    b[i++]=a[j++];
  while(k<right)
    b[i++]=a[k++];

  for(auto i=left;i<right;i++)
    a[i]=b[i];
  //std::cout<<number_of_inversions;
  return number_of_inversions;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  vector<int> b(a.size());
  std::cout << get_number_of_inversions(a, b, 0, a.size()) << '\n';
}
