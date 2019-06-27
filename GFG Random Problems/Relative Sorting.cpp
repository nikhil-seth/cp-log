// Relative Sorting
//https://practice.geeksforgeeks.org/problems/relative-sorting/0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        map<int,int> a;
        int arr[m],x;
        for(int i=0;i<n;i++){
            cin>>x;
            a[x]++;
        }
        for(auto &y:arr)
            cin>>y;
        for(int i=0;i<m;i++){
            auto it=a.find(arr[i]);
            if(it==a.end() || it->second==0)
                continue;
            while(it->second!=0){
                cout<<it->first<<' ';
                it->second--;
            }
        }
        for(auto it=a.begin();it!=a.end();it++){
            if(it->second==0)
                continue;
            while(it->second!=0){
                cout<<it->first<<' ';
                it->second--;
            }
        }
        cout<<endl;
    }
}
        