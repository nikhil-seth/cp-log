#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            return 0;
        }
    }
    cout<<n+1;
}