#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b){  // a<b -> True ,else false
  string ab,ba;
  ab=a.append(b);
  ba=b.append(a);
  if(ab.compare(ba)<0)
    return true;
  else
    return false;
}

int main(){
  int n;
  cin>>n;
  string arr[n],s;
  cin.ignore();
  for(int i=0;i<n-1;i++){
    getline(cin,arr[i],' ');
  }
  getline(cin,arr[n-1]);
  for(int i=0;i<n;i++){
    s=arr[i];
    int index=i;
    for(int j=i+1;j<n;j++){
      if(compare(arr[j],s)){
        index=j;
        s=arr[j];
      }
    }
    arr[index]=arr[i];
    arr[i]=s;
  }
  for(int i=n-1;i>=0;i--)
    cout<<arr[i];
}
