#include <bits/stdc++.h>
using namespace std;

int main() {
	int dp[1000000] = {0};
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	for(int i = 1; i <= n; i++) {
	    int ans1 ,ans2, ans3;
	    ans1 = ans2 = ans3 = -1;
	    if((i - a) >= 0) {
	        ans1 = dp[i - a];
	    }
	    if(i - b >= 0) {
	        ans2 = dp[i - b];
	    }
	    if(i - c >= 0) {
	        ans3 = dp[i - c];
	    }
	    if(ans1 == -1 && ans2 == -1 && ans3 == -1) {
	        dp[i] = -1;
	    }
	    else 
	        dp[i] = 1 + max({ans1, ans2, ans3});
	}
	cout << dp[n];
	return 0;
}