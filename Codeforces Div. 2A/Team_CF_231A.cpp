// Link to problem : http://codeforces.com/problemset/problem/231/A
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,t=0,ctr;
	cin>>n;
	while(n--){
		t=3;
		ctr=0;
		int temp;
		while(t--){
			cin>>temp;
			if(temp)
				++ctr;
		}
		if(ctr>1)
			sum+=1;
}cout<<sum;
return 0;

}