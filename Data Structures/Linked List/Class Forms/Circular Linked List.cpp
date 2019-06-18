#include<bits/stdc++.h>
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
struct Node{
	int data;	// Data.
	Node *next;	// Pointer to next node.
};
class CLL{
private:
	Node *head;
public:
	CLL(){
		head=nullptr;
	}
	int ListLength(){
		int count=0;
		if(head==nullptr)
			return 0;
		Node *n=head;
		do{
			count++;
			n=n->next;
		}while(n!=head);
	return count;
	}
	void Traverse(){
		Node *n=head;
		if(head==nullptr){
			cout<<"Empty List"<<endl;
			return;
		}
		do{
			cout<<n->data<<' ';
			n=n->next;
		}while(n!=head);
		cout<<endl;
	}
	void insbeg(int data){
		Node *newnode;
		newnode=(Node*)malloc(sizeof(Node));
		newnode->data=data;
		newnode->next=newnode;
		if(head==nullptr)
			head=newnode;
		else{
			Node *n;
			n=head;
			while(n->next!=head)
				n=n->next;
			newnode->next=head;
			n->next=newnode;
			head=newnode;
		}
	}
	void insend(int data){
		Node *newnode;
		newnode=(Node*)malloc(sizeof(Node));
		newnode->data=data;
		newnode->next=newnode;
		if(head==nullptr)
			head=newnode;
		else{
			Node *n=head;
			while(n->next!=head)
				n=n->next;
			newnode->next=n->next;
			n->next=newnode;
		}
	}
	void insposn(int data,int posn){
		Node *newnode,*n;
		newnode=(Node*)malloc(sizeof(Node));
		newnode->data=data;
		newnode->next=nullptr;
		if(head==nullptr){
			head=newnode;
			return;
		}
		int k=posn-1;// We traverse till posn-1
		if(k==0){// Starting.{
			n=head;
			while(n->next!=head)
				n=n->next;
			newnode->next=n->next;
			n->next=newnode;
			head=newnode;
		}
		else{
			n=head;
			while(n->next!=head && k!=1){
				k--;
				n=n->next;
			}
			newnode->next=n->next;
			n->next=newnode;
		}
	}
	void delfirst(){
		Node *temp;
		if(head==nullptr){
			cout<<"Empty List"<<endl;
			return;
		}
		if(head->next==head){
			temp=head;
			head=nullptr;
			free(temp);
			return;
		}
		temp=head;
		while(temp->next!=head)
			temp=temp->next;
		temp->next=head->next;
		temp=head;
		head=head->next;
		free(temp);
	}
	void delend(){
		Node *temp,*t2;
		if(head==nullptr){
			cout<<"Empty List"<<endl;
			return;
		}
		if(head->next==head){
			temp=head;
			head=nullptr;
			free(temp);
		}
		else{
			temp=head;
			while(temp->next->next!=head)
				temp=temp->next;
			t2=temp->next;
			temp->next=head;
			free(t2);
		}
	}
	void delposn(int p){
		if(head==nullptr){
			cout<<"Empty List"<<endl;
			return;			
		}
		int k=p-1;
		Node *temp,*t2;
		if(k==0){
			temp=head;
			while(temp->next!=head)
				temp=temp->next;
			temp->next=head->next;
			head=head->next;
			free(temp);
		}
		else{
			temp=head;
			while(temp->next!=head && k!=1){
				temp=temp->next;
				k--;
			}
			if(k>1){
				cout<<"Position doesn't exist"<<endl;
				return;
			}
			else{
				t2=temp->next;
				temp->next=t2->next;
				free(t2);
			}
		}
	}
	void dellist(){
		Node *t,*temp;
		if(head==nullptr)
			return;
		t=head;
		do{
			temp=t;
			t=t->next;
			free(temp);
		}while(head!=t);
		head=nullptr;
	}
};
int main(){
	fastio
	fio
	class CLL L;
	while(1){
		/*cout<<"1: ListLength()\n2: Traverse()\n3: Insert beg(data)\n";
		cout<<"4: InsertEnd(data)\n 5: InsertPosn(data,posn)\n 6: Deletefirst\n";
		cout<<"7: DeleteEnd()\n 8: DeletePosn(posn)\n 9: Deletelist()\n 10: Exit()\n";
		*/int ch;
		cin>>ch;
		int data,posn;
		switch(ch){
			case 1:
				cout<<L.ListLength()<<endl;
				break;
			case 2:
				L.Traverse();
				break;
			case 3:
				cout<<"Enter Data : ";
				cin>>data;
				L.insbeg(data);
				break;
			case 4:
				cout<<"Enter Data : ";
				cin>>data;
				L.insend(data);
				break;
			case 5:
				cout<<"Enter Data : ";
				cin>>data;
				cout<<"Enter Posn : ";
				cin>>posn;
				L.insposn(data,posn);
				break;
			case 6:
				L.delfirst();
				break;
			case 7:
				L.delend();
				break;
			case 8:
				cout<<"Enter Posn : ";
				cin>>posn;
				L.delposn(posn);
				break;
			case 9:
				L.dellist();
				break;
			case 10:
				L.dellist();
				return 0;
			}
		}
	return 0;
}
/*
3 10
2
4 12
2
5 0 1
2
5 99 6
2
5 88 3
2
6
2
7
2
8 6
2
8 3
2
9
2
10*/