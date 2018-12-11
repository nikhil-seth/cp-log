#include<bits/stdc++.h>
using namespace std;
struct ListNode {
	int data;
	ListNode *next;
};
void Push(ListNode **top,int data){
	ListNode *newNode;
	newNode=(ListNode*)malloc(sizeof(ListNode));
	newNode->data=data;
	newNode->next=*top;
	*top=newNode;
	cout<<"Pushed";
}
ListNode *CreateStack(){
	return nullptr;
}
int IsEmpty(ListNode *top){
	if(top==nullptr)
		return 1;
	return 0;
}

int top(ListNode *top){
	if(IsEmpty(top)){
		cout<<"UnderFlow";
		return INT_MIN;
	}
	return top->data;
}
int Pop(ListNode **top){
	if(*top==nullptr){
		cout<<"UnderFlow";
		return INT_MIN;
	}	
	int t=(*top)->data;
	ListNode *curr=*top;
	*top=(*top)->next;
	free(curr);
	return t;
}
void PrintStack(ListNode *top){
	ListNode *curr=top;
	while(curr!=nullptr){
		cout<<curr->data<<' ';
		curr=curr->next;
	}
}
void DelStack(ListNode **top){
	ListNode *prev,*curr=*top;
	while(curr!=nullptr){
		prev=curr;
		curr=curr->next;
		free(prev);
	}
	top=nullptr;
}
int main(){
	ListNode *S;
	S=CreateStack();
	while(1){
		int val;
		cin>>val;
		switch(val){
		case 1:
			int data;
			cin>>data;
			Push(&S,data);
			break;
		case 2:
			cout<<Pop(&S);
			break;
		case 3:
			cout<<IsEmpty(S);
			break;
		case 4:
			PrintStack(S);
			break;
		case 5:
			DelStack(&S);
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
