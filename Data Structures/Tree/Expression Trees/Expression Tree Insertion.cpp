// Construct Expression Tree from Postfix Expression.
// We Need a postifx expression with char elements as input.
#include<bits/stdc++.h>
using namespace std;
struct Node{
	char data;
	Node *left,*right;
	Node(char x){
		data=x;
		left=right=nullptr;
	}
};
Node *BuildExpTree(string postfix,int size){
	if(size==0)
		return nullptr;
	stack<Node*> S;
	Node *t1,*t2,*t;
	for(int i=0;i<size;i++){
		switch(postfix[i]){
			case '+': case '-': case '*': case '/':
				t1=S.top();
				S.pop();
				t2=S.top();
				S.pop();
				t=new Node(postfix[i]);
				t->left=t1;
				t->right=t2;
				S.push(t);
				break;
			default:
				t=new Node(postfix[i]);
				S.push(t);
				break;
		}
	}
}
int main(){
	return 0;

}