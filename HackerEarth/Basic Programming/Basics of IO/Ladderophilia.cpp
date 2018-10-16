// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/ladderophilia/
#include <iostream>
using namespace std;
void pr(int n){
	if(n==0)
		printf("*   *\n*   *\n");
	else{
		printf("*   *\n*   *\n");
		printf("*****\n");
		pr(n-1);
	
}}
int main(){
	int n;
	cin>>n;
	pr(n);
 return 0;	
}
//Time Complexity : O(n)