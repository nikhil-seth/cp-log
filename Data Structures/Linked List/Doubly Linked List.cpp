#include<iostream>
using namespace std;
struct DLLNode{
	int data;
	struct DLLNode *next;
	struct DLLNode *prev;
};
int traversal(struct DLLNode *head,int var){
	struct DLLNode *curr;
	curr=head;
	int count=0;
	while(curr->next!=nullptr){
		if(var)
			cout<<curr->data<<' ';
		curr=curr->next;
		count++;
	}
	cout<<"\nSize :"<<count<<endl;
	return count;
}
void insert(struct DLLNode **head,int data, int pos){
	struct DLLNode *NewNode,*curr,*prev;
	NewNode=(struct DLLNode*)malloc(sizeof(struct DLLNode));
	if(!NewNode){
		cout<<"\nError\n";
		return;
	}
	int k=pos-1;
	if(pos==1){
		curr=*head;
		NewNode->next=curr;
		NewNode->prev=nullptr;
		curr->prev=NewNode;
		*head=NewNode;
	}
	else{
		prev=*head;
		while(prev->next!=nullptr){
			if(k==1)
				break;
			k--;
			prev=prev->next;
		}
		curr=prev->next;
		prev->next=NewNode;
		NewNode->prev=prev;
		NewNode->next=curr;
		curr->prev=NewNode;
	}
}
// Time Complexity : O(N)
// Space Complexity : O(1)
void DelNode(struct DLLNode **head,int pos){
	struct DLLNode *curr,*prev;
	if(pos==1){
		prev=*head;
		curr=prev->next;
		curr->prev=nullptr;
		free(prev);
	}
	else {
		int k=pos-1;
		prev=*head;
		while(prev->next->next!=nullptr){
			if(k==1)
				break;
			k--;
			prev=prev->next;
		}
		if(k>1){
			cout<<"Node Not Found";
			return;		}
		curr=prev->next;
		prev->next=curr->next;
		free(curr);
	}
}
// Time Complexity : O(n)
// Space Complexity : O(1)
void DelList(struct DLLNode **head){
	struct DLLNode *prev,*curr=*head;
	while(curr->next!=nullptr){
		prev=curr;
		curr=curr->next;
		free(prev);
	}
	*head=nullptr;
}
// Time Complexity : O(n)
// Space Complexity : O(1)


int main(){
// Code to checking correctness of above Code 
int data,posn,val,ll;
	struct DLLNode *head=nullptr;
	while(1){
		cin>>val;
		if(val==1){
			cin>>data;
			insert(&head,data,1);
			ll=traversal(head,1);
		}
		else if(val==2){
			cin>>data;
			cin>>posn;
			insert(&head,data,posn);
		ll=traversal(head,1);
		}
		else if(val==3){
			cin>>data;
			insert(&head,data,-1);
		ll=traversal(head,1);
		}	
		else if(val==4){
			DelNode(&head,1);
			ll=traversal(head,1);
		}
		else if(val==5){
			cin>>posn;
			DelNode(&head,posn);
			ll=traversal(head,1);
		}
		else if(val==6){
			DelNode(&head,-1);
			ll=traversal(head,1);
		}
		else if(val==7){
			DelList(&head);
			ll=traversal(head,1);
		}
		else
			break;
}
return 0;
}