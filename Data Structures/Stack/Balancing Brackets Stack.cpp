#include<iostream>
using namespace std;
struct Stack{					//DEFINATION OF STRUCTURE FOR STACK AS LL
	char data;
	struct Stack *link;
};
struct Stack *Create(){			//RETURNS STACK POINTER AFTER CREATING IT
	return nullptr;
}
void Push(struct Stack **top,char data){	//PUSHES AN ELEMENT TO STACK
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
char Pop(struct Stack **top){
	struct Stack *temp;
	char data;
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
char top(struct Stack *top){
	if(IsEmpty){
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
	struct Stack *s;
	s=Create();
	string t;
	cin>>t;
	int i=0;
	char k=1,l;
	while(t[i]!='\0'){
		if(t[i]=='['||t[i]=='{'||t[i]=='(')
			Push(&s,t[i]);
		if(t[i]==']'||t[i]=='}'||t[i]==')'){
				k=Pop(&s);
				if(t[i]==')')
					l='(';
				else if(t[i]==']')
					l='[';
				else 
					l='(';
				cout<<k;
				if(k==l);
				else{
					cout<<"FAIL";
					return 0;
				}
		}
		i++;
	}
	if(IsEmpty(s))
		cout<<"SUCCESS";
	else 
		cout<<"Fail";
	DelStack(&s);
	return 0;
}	