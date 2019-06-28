//https://practice.geeksforgeeks.org/problems/majority-element/0
// Majority Element
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) for(auto &(x):(arr))
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastio
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        FORA(x,arr)
            cin>>x;
        int ma=0,count=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[ma])
                count++;
            else
                count--;
            if(count==0){
                ma=i;
                count=1;
            }
        }
        // We Got Majority Element ka candidate.
        count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[ma])
                count++;
        }
        if(count>n/2)
            cout<<arr[ma]<<endl;
        else
            cout<<-1<<endl;
    }
}
