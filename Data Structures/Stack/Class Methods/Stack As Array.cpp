#include<iostream>
#define MAXSIZE 50
using namespace std;

struct Stack{
	int top;
	int capacity;
	int *arr;
};
Stack *CreateStack(){
	Stack *S=(Stack*)malloc(sizeof(Stack));
	S->top=-1;
	S->capacity=MAXSIZE;
	S->arr=(int*)malloc(sizeof(int)*S->capacity);
	return S;
}
void Push(Stack *S,int data){
	if(S->top==S->capacity-1){
		cout<<"Overflow";
		return;
	}
	S->arr[++S->top]=data;
}
int Pop(Stack *S){
	if(S->top==-1){
		cout<<"Empty Stack\n";
		return -1;
	}
	int t=S->arr[S->top];
	S->top--;
	return t;
}
int main(){

}