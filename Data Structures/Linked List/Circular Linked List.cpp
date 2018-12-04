#include<iostream>
using namespace std;
struct CLLNode{
	int data;
	CLLNode *next;
};

int CLLLength(CLLNode *head){
	CLLNode *curr=head;
	int count=1;
	if(curr==nullptr)
		return 0;
	while(curr->next!=head){
		count++;
		curr=curr->next;
	}
	return count;
}
void traversal(CLLNode *head){
	CLLNode *curr=head;
	if(curr==nullptr)
		return;
	do{
		cout<<curr->data<<' ';
		curr=curr->next;
	}while(curr!=head);
}
void insert(CLLNode **head,int data,int posn){ // Posn=1(begn),-1 for end,posn for at a posn
	CLLNode *prev,*NewNode;
	NewNode=(CLLNode*)malloc(sizeof(CLLNode));
	NewNode->data=data;
	int k=posn-1;
	prev=*head;
	if(!(*head)){
		NewNode->next=NewNode;
		*head=NewNode;
		return;
	}
	while(prev->next!=(*head)){
		if(k==1)
			break;
		k--;
		prev=prev->next;
	}
	NewNode->next=prev->next;
	prev->next=NewNode;
	if(posn==1)
		*head=NewNode;
}
// Time Complexity : O(N)
// Space Complexity : O(1)
void DelCLL(CLLNode **head,int posn){
	CLLNode *prev,*curr;
	prev=*head;
	if(*head==nullptr){
		cout<<"Empty List";
		return;
	}
	if(posn==-1){
		while(prev->next->next!=(*head))
			prev=prev->next;
		curr=prev->next;
		prev->next=curr->next;
		free(curr);
		return;
	}
	int k=posn-1;
	while(prev->next!=(*head)){
		if(k==1)
			break;
		k--;
		prev=prev->next;
	}
	curr=prev->next;
	prev->next=curr->next;
	free(curr);
	if(posn==1)
		*head=prev->next;
}
void DelList(CLLNode **head){
	CLLNode *prev,*curr=*head;
	prev=*head;
	curr=(*head)->next;
	while(curr!=prev){
		prev->next=curr->next;
		free(curr);
		curr=prev->next;
	}
	free(prev);
	*head=nullptr;
}
int main(){
	// Driver program
	/*
	CLLNode *head=nullptr;
	insert(&head,1,1);

insert(&head,2,1);
insert(&head,3,-1);
insert(&head,6,-1);
insert(&head,8,3);
traversal(head);
cout<<endl;
DelCLL(&head,1);
traversal(head);
cout<<endl;
DelCLL(&head,3);
traversal(head);
cout<<endl;
DelCLL(&head,-1);
traversal(head);
DelList(&head);
traversal(head);*/
	return 0;
}