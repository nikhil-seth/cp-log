#include<bits/stdc++.h>
#define MAXSIZE 10
using namespace std;

struct ArrayStack{		// Defining Structure of each Stack
	int top;			// Value of top element
	int capacity;		// Max Capacity of Stack
	int *array;			// Allocated array pointer
};
struct ArrayStack *CreateStack(){
	struct ArrayStack *S;
	S=(ArrayStack*)malloc(sizeof(struct ArrayStack));
	if(!S)
		return nullptr;
	S->capacity=MAXSIZE;
	S->top=-1;
	S->array=(int*)malloc(S->capacity*sizeof(int));
	if(!S->array)
		return nullptr;
	return S;
}
int top(ArrayStack *S){
	return S->array[S->top];
}
int IsEmpty(ArrayStack *S){
	if(S->top==-1)
		return 1;
	return 0;
}
int IsFull(ArrayStack *S){
	if(S->capacity<=S->top+1)
		return 1;
	return 0;
}
void Push(ArrayStack *S,int data){
	if(IsFull(S)){
		cout<<"Overflow";
		return;
	}
	S->array[++S->top]=data;
	cout<<"Pushed";
}
int Pop(ArrayStack *S){
	if(IsEmpty(S)){
		cout<<"Underflow";
		return INT_MIN;
	}
	return S->array[S->top--];
}
void DelStack(ArrayStack *S){
	if(S){
		if(S->array)
			free(S->array);
		free(S);
	}
}
int main(){
	ArrayStack *S;
	S=CreateStack();
	while(1){
		int val;
		cin>>val;
		switch(val){
		case 1:
			int data;
			cin>>data;
			Push(S,data);
			break;
		case 2:
			cout<<Pop(S);
			break;
		case 3:
			cout<<IsEmpty(S);
			break;
		case 4:
			cout<<IsFull(S);
			break;
		case 5:
			DelStack(S);
			break;
		case 6:
			cout<<top(S);
			break;
		default:
			break;
		}
	}
	return 0;
}
