// Link :https://practice.geeksforgeeks.org/problems/infix-to-postfix/0
#include<bits/stdc++.h>
using namespace std;
int pr(char s){
    if(s=='^')
        return 3;
    if(s=='*' || s=='/')
        return 2;
    if(s=='+' || s=='-')
        return 1;
    if(s=='(' || s==')')
        return 0;
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str,s2;
        cin>>str;
        stack<char> s;
        for(int i=0;i<str.length();i++){
            int val=pr(str[i]);
            if(val==-1){
                s2.push_back(str[i]);
                continue;
            }
            if(val!=0){
                while(!s.empty() && pr(s.top())!=0 && pr(s.top())>=val){
                    s2.push_back(s.top());
                    s.pop();
                }
                s.push(str[i]);
            }
            else{
                if(str[i]=='(')
                    s.push(str[i]);
                else{
                    while(s.top()!='('){
                        s2.push_back(s.top());
                        s.pop();
                    }
                    s.pop();
                }
            }
        }
        while(!s.empty()){
            s2.push_back(s.top());
            s.pop();
            
        }
        cout<<s2<<endl;
    }
}