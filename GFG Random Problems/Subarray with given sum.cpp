//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
// Subarray with given sum.
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) for(auto &(x):(arr))
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,k;
        cin>>n>>k;
        long arr[n];
        FORA(x,arr)
            cin>>x;
        long start=0,i,cumsum=arr[0];
        for(i=1;i<=n;i++){
            while(cumsum>k && start<i-1){
                cumsum-=arr[start];
                start++;
            }
            if(cumsum==k){
                break;
            }
            if(i<n)
                cumsum+=arr[i];
        }
        if(cumsum==k)
            cout<<start+1<<' '<<i<<endl;
        else
            cout<<-1<<endl;
    }
}