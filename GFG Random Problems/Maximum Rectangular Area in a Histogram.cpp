// https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram/0
// Maximum Rectangular Area in a Histogram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,pp;
    cin>>t;
    while(t--){
        cin>>n;
        unsigned long long arr[n];
        unsigned long long max_val=0,temp;
        stack<int> s;
        for(auto &x:arr)
            cin>>x;
        int i;
        for(i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>arr[i]){
                pp=s.top();
                s.pop();
                if(s.empty())
                    temp=arr[pp]*(i);
                else
                    temp=arr[pp]*(i-s.top()-1);
                max_val=max(max_val,temp);
            }
            s.push(i);
        }
            //cout<<pp<<' '<<temp<<' '<<max_val<<endl;
        while(!s.empty()){
            pp=s.top();
            s.pop();
            if(s.empty())
                temp=arr[pp]*i;
            else
                temp=arr[pp]*(i-s.top()-1);
            max_val=max(max_val,temp);
        }
        cout<<max_val<<endl;
    }
}