#define ll long long
class Solution {
public:
    int strStr(string text, string pattern){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        // Knuth Morris Pratt - KMP
        // Prefix Function based concept.
        if(pattern.size()==0) return 0;
        if(text.size()==0) return -1;
        string s=pattern+"#"+text;
        int size=text.size()+pattern.size()+1;
        vector<int> pi(size+1);
        pi[0]=0;
        for(int i=1;i<size;i+=1){
            int j=pi[i-1];
            while(j>0 && s[i]!=s[j])
                j=pi[j-1];
            if(s[i]==s[j])
                pi[i]=j+1;
            else pi[i]=0;
        }
        for(int i=pattern.size()+1;i<size;i+=1){
            if(pi[i]==pattern.size())
                return (i-2*pattern.size());
        }
        return -1;
    }
};
