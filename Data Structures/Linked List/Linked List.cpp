#include<bits/stdc++.h>
using namespace std;

struct ListNode{
	int data;
	struct ListNode *next;
};

int ListLength(struct ListNode *head,int option){
	int size=0;
	struct ListNode *current=head;
	while(current!=nullptr){
		size++;
		if(option)
			cout<<current->data<<' ';
		current=current->next;
	}
	cout<<endl<<"Size :"<<size<<endl;
	return size;
}
// Time Complexity : O(n)
// Space Complexity : O(1)

void insert(struct ListNode **head,int data,int position){  //position=1 for starting ,-1 for end ,p for pth position
	struct ListNode *NewNode,*curr;
	NewNode=(ListNode*)malloc(sizeof(struct ListNode));     // Allocates Memory from Heap
	if(!NewNode){
		printf("Memory Error");
		return;
	}
	NewNode->data=data;
	int k=position-1;
	if(k==0){				//Insertion at beginning
		NewNode->next=*head;
		*head=NewNode;
	}
	else{					// Insertion in middle or end
		curr=*head;
		while(curr->next!=nullptr){
			if(k==1)		// Condition for Insertion at a position
				break;
			k--;
			curr=curr->next;
		}
		NewNode->next=curr->next;
		curr->next=NewNode;
	}
}
// Time Complexity : O(N)
// Space Complexity : O(1)
void DelNode(struct ListNode **head,int position){			// Deletes Node
	struct ListNode *prev,*curr;
	if(*head==nullptr){										// Checking if List is not empty
		cout<<"\nEmpty List\n";
		return;
	}

	if(position==1){										// Deleting at beginning
		curr=*head;
		*head=curr->next;
		free(curr);
	}
	else {													// deleting at end & middle
		prev=*head;
		int k=position-1;
		while(prev->next->next!=nullptr){
			if(k==1)
				break;
			k--;	
			prev=prev->next;
		}
		if(k>1){
			cout<<"\nPosition doesn't exist\n";
			return;
		}
		curr=prev->next;
		prev->next=curr->next;
		free(curr);
	}
}
// Time Complexity : O(n)
// Space Complexity : O(1)

void DelList(struct ListNode **head){
	struct ListNode *prev,*curr=*head;
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
/*int data,posn,val,ll;
	struct ListNode *head=nullptr;
	while(1){
		cin>>val;
		if(val==1){
			cin>>data;
			insert(&head,data,1);
			ll=ListLength(head,1);
		}
		else if(val==2){
			cin>>data;
			cin>>posn;
			insert(&head,data,posn);
		ll=ListLength(head,1);
		}
		else if(val==3){
			cin>>data;
			insert(&head,data,-1);
		ll=ListLength(head,1);
		}	
		else if(val==4){
			DelNode(&head,1);
			ll=ListLength(head,1);
		}
		else if(val==5){
			cin>>posn;
			DelNode(&head,posn);
			ll=ListLength(head,1);
		}
		else if(val==6){
			DelNode(&head,-1);
			ll=ListLength(head,1);
		}
		else if(val==7){
			DelList(&head);
			ll=ListLength(head,1);
		}
		else
			break;
}*/
return 0;
}
