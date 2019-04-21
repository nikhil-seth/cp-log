// Rod - Cutting Problem
// Link : https://practice.geeksforgeeks.org/problems/cutted-segments/0
#include<bits/stdc++.h>
using namespace std;
int dp(map<int,int> &m,int n,int x,int y,int z){
    if(n==0)
        return 0;
    if(n<0)
        return INT_MIN;
    if(m.find(n)!=m.end())
        return m[n];
    int val;
    val=max(dp(m,n-x,x,y,z),max(dp(m,n-y,x,y,z),dp(m,n-z,x,y,z)))+1;
    m[n]=val;
    return val;
}
int main()
 {
     int t,n,x,y,z;
     cin>>t;
     while(t--){
         cin>>n>>x>>y>>z;
         map<int,int> m;
         cout<<dp(m,n,x,y,z)<<endl;
     }
     return 0;
 }