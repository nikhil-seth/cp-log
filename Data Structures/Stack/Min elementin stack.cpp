#include<iostream>
using namespace std;
struct Stack{					//DEFINATION OF STRUCTURE FOR STACK AS LL
	int data;
	struct Stack *link;
};
struct Stack *Create(){			//RETURNS STACK POINTER AFTER CREATING IT
	return nullptr;
}
void Push(struct Stack **top,int data){	//PUSHES AN ELEMENT TO STACK
	struct Stack *curr;					//TIME COMPLEXITY : O(1)
	curr=(Stack*)malloc(sizeof(Stack));
	curr->data=data;
	curr->link=*top;
	*top=curr;
}
int IsEmpty(struct Stack *top){			//CHECKS WHETHER STACK IS EMPTY
	if(top==nullptr){					//TIME COMPLEXITY : O(1)
		return 1;
	}
	else {return 0;
	}
}
int Pop(struct Stack **top){
	struct Stack *temp;
	int data;
	if(IsEmpty(*top)){
		cout<<"UNDERFLOW";
		return 0;
	}
	temp=*top;
	*top=(*top)->link;
	data=temp->data;
	free(temp);
	return data;
}
int top(struct Stack *top){
	if(IsEmpty(top)){
		cout<<"UnderFlow";
		return 0;
	}
	return top->data;
}
void DelStack(struct Stack **top){
	struct Stack *temp,*p=*top;
	while(p->link!=nullptr){
		temp=p;
		p=p->link;
		free(temp);
	}
	free(p);
}
void print_all(struct Stack *S){
	while(S!=nullptr){
		cout<<S->data<<"\n";
		S=S->link;
	}
}
int main(){
	struct Stack *a,*b;
	int x;
	a=Create();
	b=Create();
	while(1){
		cin>>x;
		Push(&a,x);
		if(b==nullptr)
			Push(&b,x);
		else if(top(a)<=top(b))
				Push(&b,x);
		cin>>x;
		if(x==1)
			cout<<b->data;
		else if(x==2)
			break;
	}
	return 0;
}	