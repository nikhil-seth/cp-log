// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/
#include <iostream>
#include<string>
using namespace std;
int main(){
	int sum=0;
	long d,r,x;
	cin>>d;
	while(d--){
		cin>>r>>x;
		r=44*r/7;
		if(r<=(100*x))
			++sum;
	}
	cout<<sum;
	return 0;	
}

// Time Complexity : O(d)