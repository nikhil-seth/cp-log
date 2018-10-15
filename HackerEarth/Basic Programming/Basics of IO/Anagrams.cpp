// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,ctr;
    cin>>t;
    string s1,s2;
    cin.ignore();
    while(t--){
    	ctr=0;
    	getline(cin,s1);
    	getline(cin,s2);
    	for(int i=0;i<s1.length();i++){
    		for(int j=0;j<s2.length()	;j++){
    			if(s1[i]==s2[j]){
    				s2[j]=0;
    				++ctr;
    				break;
    			}
    		}
    	}
    	cout<<(s1.length()+s2.length()-2*ctr)<<endl;
    }
    return 0;
}

// Time Complexity : O(nm) where n & m are size of strings.