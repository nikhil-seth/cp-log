#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
class Trie{
    struct TrieNode{
        bool isEnd;
        TrieNode *next[26];
        TrieNode(){
            FOR(i,0,25)
                next[i]=nullptr;
            isEnd=0;
        }
    }*root,*n;
public:
    Trie(){
        root=new TrieNode;
    }
    void insert(const string &s){
        n=root;
        for(int i=0;i<s.length();i+=1){
            if(n->next[s[i]-'a']==nullptr)
                n->next[s[i]-'a']=new TrieNode;
            n=n->next[s[i]-'a'];
        }
        n->isEnd=1;
    }
    bool search(const string &s){
        n=root;
        for(int i=0;i<s.length();i+=1){
            if(n->next[s[i]-'a'])
                n=n->next[s[i]-'a'];
            else
                return 0;
        }
        return n->isEnd;
    }
};
int main(){
    fastio
    Trie t;
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        t.insert(s);
    }
    cin>>n;
    while(n--){
        cin>>s;
        cout<<t.search(s)<<endl;
    }
}
