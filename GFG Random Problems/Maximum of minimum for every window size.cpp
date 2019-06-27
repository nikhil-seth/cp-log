// https://practice.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size/0
// Maximum of minimum for every window size
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(auto &x:arr)
            cin>>x;
        int left[n],right[n];
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>=arr[i])
                s.pop();
            if(s.empty())
                left[i]=-1;
            else
                left[i]=s.top();
            s.push(i);
        }
        while(!s.empty())
            s.pop();
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()]>=arr[i])
                s.pop();
            if(s.empty())
                right[i]=n;
            else
                right[i]=s.top();
            s.push(i);
        }
        // left smaller & right smaller agye
        int vals[n+1]={0};
        for(int i=0;i<n;i++)
            vals[right[i]-left[i]-1]=max(vals[right[i]-left[i]-1],arr[i]);
        for(int i=n-1;i>0;i--){
            vals[i]=max(vals[i],vals[i+1]);
        }
        for(int i=1;i<=n;i++)
            cout<<vals[i]<<' ';
        cout<<endl;
        
    }
}