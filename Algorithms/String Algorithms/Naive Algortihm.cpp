class Solution {
public:
    int strStr(string text, string pattern){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        // Brute Force.
        int n=text.size(),m=pattern.size();
        for(int i=0;i<n-m+1;i+=1){
            int j=0;
            while(j<m && text[i+j]==pattern[j])
                j+=1;
            if(j==m)
                return i;
        }
        return -1;
    }
};
