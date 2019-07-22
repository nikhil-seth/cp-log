// Job Sequencing Problem
// https://practice.geeksforgeeks.org/problems/job-sequencing-problem/0
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) FOR(auto &(x):(arr))
using namespace std;
struct Job{
    int id,dead,profit;
};
bool cmp(const Job &j1,const Job &j2){
    if(j1.profit==j2.profit)
        return j1.dead<j2.dead;
    return j1.profit>j2.profit;
}
int find(int parent[],int s){
    if(parent[s]==s)
        return s;
    return parent[s]=find(parent,parent[s]);
}
void unx(int parent[],int x,int y){
    parent[y]=x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m=0;
        cin>>n;
        Job arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i].id>>arr[i].dead>>arr[i].profit;
            m=max(m,arr[i].dead);
        }
        sort(arr,arr+n,cmp);
        int parent[m+1];
        for(int i=0;i<m+1;i++)
            parent[i]=i;
        // DSU ka Set is Made.
        int count=0,sum=0;
        for(int i=0;i<n;i++){
            int j=arr[i].dead;
            int a=find(parent,j);
            if(a>0){
                unx(parent,find(parent,a-1),a);
                count++;
                sum+=arr[i].profit;
            }
        }
        cout<<count<<' '<<sum<<endl;
    }
}