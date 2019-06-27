// https://practice.geeksforgeeks.org/problems/find-smallest-missing-in-sorted/0
// Find Smallest Missing in Sorted
#include<iostream>
using namespace std;
int bs(int arr[],int n){
    int l=0,r=n-1,m;
    while(l<=r){
        if(arr[l]!=l)
            return l;
        m=(l+r)/2;
        if(arr[m]==m)
            l=m+1;
        else
            r=m;
    }
    return r+1;
}
int main(){
    int t;
    int n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n];
        for(auto &x:arr)
            cin>>x;
        cout<<bs(arr,n)<<endl;
    }
}