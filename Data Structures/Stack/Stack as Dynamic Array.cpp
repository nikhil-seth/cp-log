#include<bits/stdc++.h>
#define MAXSIZE 10
using namespace std;

struct DynArrayStack{		// Defining Structure of each Stack
	int top;			// Value of top element
	int capacity;		// Max Capacity of Stack
	int *array;			// Allocated array pointer
};
DynArrayStack *CreateStack(){
	struct DynArrayStack *S;
	S=(DynArrayStack*)malloc(sizeof(struct DynArrayStack));
	if(!S)
		return nullptr;
	S->capacity=1;		// Initially Size will be 1
	S->top=-1;
	S->array=(int*)malloc(S->capacity*sizeof(int));
	if(!S->array)
		return nullptr;
	return S;
}
void DoubleStack(DynArrayStack *S){
	S->capacity*=2;
	realloc(S->array,S->capacity*sizeof(int));
}
int top(DynArrayStack *S){
	return S->array[S->top];
}
int IsEmpty(DynArrayStack *S){
	if(S->top==-1)
		return 1;
	return 0;
}
int IsFull(DynArrayStack *S){
	if(S->capacity<=S->top+1)
		return 1;
	return 0;
}
void Push(DynArrayStack *S,int data){
	if(IsFull(S))
		DoubleStack(S);
	S->array[++S->top]=data;
	cout<<"Pushed";
}
int Pop(DynArrayStack *S){
	if(IsEmpty(S)){
		cout<<"Underflow";
		return INT_MIN;
	}
	return S->array[S->top--];
}
void DelStack(DynArrayStack *S){
	if(S){
		if(S->array)
			free(S->array);
		free(S);
	}
}
int main(){
	DynArrayStack *S;
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
