// Link to problem :http://codeforces.com/problemset/problem/230/A
#include<vector>
#include<iostream>
using namespace std;

int main(){
	int n,s,temp;
	cin>>s>>n;
	vector<int> x,y;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(s>temp){
			cin>>temp;
			s+=temp;
		}
		else{
			x.push_back(temp);
			cin>>temp;
			y.push_back(temp);
		}
	}
	for(int i=0;i<x.size();i++){
		for(int j=i+1;j<x.size()	;j++){
			if(x[i]>x[j]){
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
				temp=y[j];
				y[j]=y[i];
				y[i]=temp;
			}
		}
	}

	temp=0;
	for(int i=0;i<x.size();i++){
		if(s<=x[i]){
			temp=1;
			break;
		}
		else
			s+=y[i];
	}
	if(temp)
		cout<<"NO";
	else
		cout<<"YES";

	return 0;
}

