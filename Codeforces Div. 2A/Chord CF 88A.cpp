#include<bits/stdc++.h>
using namespace std;
#define LL long long
int convert(string &s){
	if(s=="C")
		return 0;
	if(s=="C#")
		return 1;
	if(s=="D")
		return 2;
	if(s=="D#")
		return 3;
	if(s=="E")
		return 4;
	if(s=="F")
		return 5;
	if(s=="F#")
		return 6;
	if(s=="G")
		return 7;
	if(s=="G#")
		return 8;
	if(s=="A")
		return 9;
	if(s=="B")
		return 10;
	if(s=="H")
		return 11;
}
int ans(int a,int b,int c){
	if(((a+3)%12)==b && ((a+7)%12)==c)
		return -1;
	if(((a+4)%12)==b && ((a+7)%12)==c)
		return 1;
	else
		return 0;
}
int main(){
	string s1,s2,s3;
	getline(cin,s1,' ');
	getline(cin,s2,' ');
	getline(cin,s3);
	int arr[3];
	arr[0]=convert(s1);
	arr[1]=convert(s2);
	arr[2]=convert(s3);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				if(i==j || i==k || k==j)
					continue;
				if(ans(arr[i],arr[j],arr[k])==-1){
					cout<<"minor";
					return 0;
				}
				else if(ans(arr[i],arr[j],arr[k])==1){
					cout<<"major";
					return 0;
				}
			}
		}
	}
	cout<<"strange";
	return 0;
}