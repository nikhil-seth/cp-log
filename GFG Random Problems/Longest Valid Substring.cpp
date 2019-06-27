// https://practice.geeksforgeeks.org/problems/valid-substring/0
// Longest Valid Substring using 2 Pointer Appraoch.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int mv=0;
        int left=0,right=0,pi=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='(')
                left++;
            else
                right++;
            if(left==right)
                mv=max(mv,2*right);
            if(left<right)
                left=right=0;
        }
        left=0;right=0;
        for(int i=str.length()-1;i>=0;i--){
            if(str[i]=='(')
                left++;
            else
                right++;
            if(left==right)
                mv=max(mv,2*right);
            if(left>right)
                left=right=0;
        }
        cout<<mv<<endl;
    }
}
