// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
#include<iostream>
#include<string>
using namespace std;
int palindrome(const string &s,int a, int b){
    if(a==(b-1) || a>b)
        return 1;
    if(s[a]!=s[b-1])
        return 0;
    else
        return palindrome(s,a+1,b-1);
}
int main(){
    string s;
    getline(cin,s);
    if(palindrome(s,0,s.length()))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

// Time Complexity : O(N)