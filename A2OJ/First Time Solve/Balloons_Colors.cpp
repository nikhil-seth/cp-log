// Link to problem :https://a2oj.com/p?ID=6
#include<iostream>
#include<vector>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y,ip,temp,count=0;
		cin>>n>>x>>y;
		temp=n;
		while(n--){
			cin>>ip;
			//cout<<ip<<x<<y;
			if(n+1==temp && x==ip){
				count+=10;
			}
			if(n==0 && y==ip){
				count+=1;
			}
			//cout<<"count"<<count<<endl;
		}
		if(count==11)
			cout<<"BOTH"<<endl;
		else if (count==10)
			cout<<"EASY"<<endl;
		else if(count==1)
			cout<<"HARD"<<endl;
		else if(count==0)
			cout<<"OKAY"<<endl;
	}
	return 0;
}