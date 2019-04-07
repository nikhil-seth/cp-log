#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
  int n,m;
  cin>>n;
  int a[n];
  for(auto &x:a)
    cin>>x;
  cin>>m;
  int b[m];
  for(auto &x:b)
    cin>>x;
  int ctr=0;
  sort(a,a+n);
  sort(b,b+m);
  int i=0,j=0;
  for(;i<n && j<m;){
    if(abs(a[i]-b[j])<=1){
      ctr++;
      i++;
      j++;
    }
    else if(a[i]<b[j])
      i++;
    else
      j++;
  }
  cout<<ctr;
  }
  