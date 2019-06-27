// https://practice.geeksforgeeks.org/problems/stock-span-problem/0
// Stock span problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(auto &x:arr)
            cin>>x;
        int temp;
        stack<int> s;
        for(int i=0;i<n;i++){
            temp=arr[i];
            while(!s.empty() && arr[s.top()]<=arr[i])
                s.pop();
            if(s.empty())
                cout<<i+1<<' ';
            else
                cout<<i-s.top()<<' ';
            s.push(i);
        }
        cout<<endl;
    }
}
