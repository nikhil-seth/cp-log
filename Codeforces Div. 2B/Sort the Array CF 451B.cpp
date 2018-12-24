#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
vector<long> fn(long v1[],long v2[],int n){
	long l1=0,l2=0,l3=0;
	vector<long> result;
	int i=0;
	while(i!=n){
		l1=l1^v1[i]^v2[i];
		if(l1!=0)
			break;
		i++;
	}
	if(i==n){
		result.push_back(1);
		result.push_back(1);
		result.push_back(1);
		return result;
	}
	int j=n-1;
	while(j>=0){
		l2=l2^v1[j]^v2[j];
		if(l2!=0)
			break;
		j--;
	}
	l3=0;
	int k=0,t=j;
	while(k!=n){
		if(k>=i && k<=j){
			l3=v1[t--]^v2[k++];
			if(l3!=0)
				break;
		}
		else{
		l3=v1[k]^v2[k];
		k++;
		if(l3!=0)
			break;
		}
	}

	l1=l1^l2;
	
	if(l1==0 && l3==0){
		result.push_back(1);
		result.push_back(i+1);
		result.push_back(j+1);
	}
	else{
		result.push_back(0);
	}
	return result;
}
int main(){
	int n;
	cin>>n;
	long v1[n],v2[n];
	vector<long> v3;
	long l;
	for(int i=0;i<n;i++){
		cin>>l;
		v1[i]=l;
		v2[i]=l;
	}
	sort(v2, v2+n);
	v3=fn(v1,v2,n);
	if(v3[0]==0)
		cout<<"no";
	else{
		cout<<"yes\n";
		cout<<v3[1]<<' '<<v3[2];
	}

	return 0;
}
