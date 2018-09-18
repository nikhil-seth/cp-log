// Link to problem :https://a2oj.com/p?ID=6
#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,flag=-1,k;
		cin>>n;
		k=n;
		string s[n];
		cin.ignore();
		while(k--){
		cin>>s[n-k-1];
		}
		for(int i=0;i<n;i++){
			if(s[i][0]!='#'){
				flag=i;
				break;
			}
		}
		k=n;
		if(flag!=-1){
			k=flag+1;
			while(k!=n){
				cout<<s[k]<<' ';
				k++;
			}
			cout<<s[flag]<<' ';
			k=0;
			while(k!=flag){
				cout<<s[k]<<' ';
				k++;
			}
		}
		else if(flag==-1){
			k=0;
			while(k!=n)
				cout<<s[k++]<<' ';
		}
		cout<<endl;
	}
	return 0;
}