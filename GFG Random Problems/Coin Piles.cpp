// https://practice.geeksforgeeks.org/problems/coin-piles/0
// Coin Piles

#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        // Input taken.
        int i=0,x,score,cr=0,ps=INT_MAX,mval;
        while(i<n){
            mval=arr[i];
            score=0;
            // We got min.val in mval.
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0 && arr[j]>mval+k)
                    score=score+arr[j]-mval-k;
            }
            //We Got Score.
            score+=cr;// CR-> Coins Removed previously.
            // We'll get total Score.
            if(score<=ps)
                ps=score;
            cr+=mval;// We'll Remove this pile
            i++;
        }
        cout<<ps<<endl;
    }
}