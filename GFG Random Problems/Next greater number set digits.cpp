//https://practice.geeksforgeeks.org/problems/next-greater-number-set-digits/0
//Next greater number set digits
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) for(auto &(x):(arr))
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q,k=0;
        cin>>n;
        string s;
        q=n;
        vector<int> v;
        while(n!=0){
            s+=to_string(n%10);
            n/=10;
        }
        reverse(s.begin(),s.end());
        bool val=next_permutation(s.begin(),s.end());
        if(val)
            cout<<s<<endl;
        else
            cout<<"not possible"<<endl;
    }
}