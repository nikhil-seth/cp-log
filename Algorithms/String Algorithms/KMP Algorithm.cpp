#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define mii map<int,int>
#define mpii map<pair<int,int>>
#define pii pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
// NAIVE ALGORITHM FOR PATTERN SEARCHING
// TC: O(N*M)
vector<int> prefix(const string &pat){
    int n=pat.length();
    vector<int> pi(n+1);
    pi[0]=pi[1]=0;
    int j;
    FOR(i,2,n){
        j=pi[i-1];
        while(1){
            if(pat[i-1]==pat[j]){
                pi[i]=j+1;
                break;
            }
            if(j==0){
                pi[i]=0;
                break;
            }
            j=pi[j];
        }
    }
    return pi;
}
bool KMP(const string &text, const string &pat){
    vector<int> pi=prefix(pat);
    int m=pat.length(),n=text.length();
    int i=0,j=0;
    // J -> text , I->pattern
    while(1){
        if(j==n)
            break;
        if(text[j]==pat[i]){
            i+=1;
            j+=1;
            if(i==m)
                return 1;
        }
        else if(i>0)
            i=pi[i];
        else
            j++;
    }
    return 0;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
    string text,pat;
    cin>>pat>>text;
    cout<<KMP(text,pat);
}