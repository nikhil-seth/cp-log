#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x,y,k,n,a,b;
	cin>>t;
	while(t--){
		scanf("%d%d%d%d",&x,&y,&k,&n);
		bool flag=0;
		x-=y;
		while(n--){
			scanf("%d%d",&a,&b);
			if(b<=k && a>=x && !flag)
				flag=1;
		}
		if(flag)
			printf("LuckyChef\n");
		else
			printf("UnluckyChef\n");

	}
	return 0;
}