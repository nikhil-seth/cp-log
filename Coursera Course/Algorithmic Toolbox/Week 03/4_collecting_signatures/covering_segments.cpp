#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  long a,b;
  vector<pair<long,long>> arr(n);
  vector<long> points;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    arr[i]=make_pair(b,a);
  }
  sort(arr.begin(),arr.end());
  long t=arr[0].first;
  points.push_back(t);
  for(int i=0;i<n;i++){
    if(t<arr[i].second || t>arr[i].first){
      t=arr[i].first;
      points.push_back(t);
    }
  }
  cout<<points.size()<<endl;
  for(int i=0;i<points.size();i++)
    cout<<points[i]<<' ';
  return 0;
}