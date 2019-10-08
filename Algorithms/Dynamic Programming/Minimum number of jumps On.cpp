// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0
// https://www.geeksforgeeks.org/minimum-number-jumps-reach-endset-2on-solution/
#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define mod1 1000000007
using namespace std;
int main(){
	fastio
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    FORA(x,arr) cin>>x;
    	if(arr[0]==0){
    		cout<<-1<<endl;
    		continue;
    	}
    	int mr,step,jump;
    	mr=step=arr[0];
    	jump=1;
    	FOR(i,1,n-1){
    	    if(i==n-1)
    	        break;
    	    mr=max(mr,i+arr[i]);
    	    step--; // Bcoz we took a step.
    	    if(step==0){
    	        jump++;
    	        if(i>=mr){
    	            jump=-1;
    	            break;
    	        }
    	        step=mr-i;
    	    }
    	}
    	cout<<jump<<endl;
    }
}