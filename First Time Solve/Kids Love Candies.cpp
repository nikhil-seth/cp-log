/* Link To Problem : https://a2oj.com/p?ID=17   */

#include<iostream>
#include<vector>

using namespace std;
int main(){
	int t,a,b,temp;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int count=0;
		while(a--){
			cin>>temp;
			count+=temp/b;
		}


		cout<<count<<endl;
	}
	return 0;
}