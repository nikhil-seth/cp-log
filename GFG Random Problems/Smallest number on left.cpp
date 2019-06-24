// Link :https://practice.geeksforgeeks.org/problems/smallest-number-on-left/0
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        stack<int> s;
        int arr[n];
        for(auto &x:arr)
            cin>>x;
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top()>=arr[i])
                s.pop();
            if(s.empty())
                cout<<-1<<' ';
            else
                cout<<s.top()<<' ';
            s.push(arr[i]);
        }
    cout<<endl;
    }
}