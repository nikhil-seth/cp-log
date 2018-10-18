// Link to Problem : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-insert/
#include <iostream>
#include<string>
using namespace std;

int main()
{   
	int n,q,t,b,c;
	long sum;
	cin>>n>>q;
	int a[n];
	for(auto &x:a)
		cin>>x;
	while(q--){
		cin>>t>>b>>c;
		if(t==1)
			a[b]=c;
		else{
			if(b>c || b<0 || c<0)
				cout<<"-1\n";
			else{
				sum=0;
				for(int i=b;i<=c;i++)
					sum+=a[i];
				cout<<sum<<endl;
			}
		}
	}
	return 0;
}

//Time Complexity : O(qn)