#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    char c=1;
    int i=1;
    while(!((c>=65 && c<=90) || (c>=97 && c<=122))){
        c=s[s.length()-i];
        i++;
    }
    //cout<<c;
    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U' || c=='Y' || c=='y')
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}