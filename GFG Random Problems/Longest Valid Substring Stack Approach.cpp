// https://practice.geeksforgeeks.org/problems/valid-substring/0
// Stack Approach.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int mv=0;
        stack<int> s;
        s.push(-1);
        for(int i=0;i<str.length();i++){
            if(str[i]=='(')
                s.push(i);
            else{
                s.pop();
                if(s.empty())
                    s.push(i);
                else
                    mv=max(mv,i-s.top());
            }
        }
        cout<<mv<<endl;
    }
}
