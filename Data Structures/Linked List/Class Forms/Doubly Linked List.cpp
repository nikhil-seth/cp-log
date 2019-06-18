#include<bits/stdc++.h>
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
struct Node{
	int data;	// Data.
	Node *next;	// Pointer to next node.
	Node *prev;
};
class DLL{
private:
	Node *head;
public:
	DLL(){
		head=nullptr;
	}
	int ListLength(){
		if(head==nullptr)
			return 0;
		Node *n=head;
		int count = 0;
		while(n!=nullptr){
			count++;
			n=n->next;
		}
		return count;
	}
	void Traverse(){
		Node *n=head;
		while(n!=nullptr){
			cout<<n->data<<' ';
			n=n->next;
		}
		cout<<endl;
	}
	void insbeg(int data){
		Node *newnode;
		newnode=(Node*)malloc(sizeof(Node));
		newnode->data=data;
		newnode->next=nullptr;
		newnode->prev=nullptr;
		if(head==nullptr)
			head=newnode;
		else{
			newnode->next=head;
			head->prev=newnode;
			head=newnode;
		}
	}
	void insend(int data){
		Node *newnode;
		newnode=(Node*)malloc(sizeof(Node));
		newnode->data=data;
		newnode->next=nullptr;
		newnode->prev=nullptr;
		if(head==nullptr)
			head=newnode;
		else{
			Node *n=head;
			while(n->next!=nullptr)
				n=n->next;
			n->next=newnode;
			newnode->prev=n;
		}
	}
	void insposn(int data,int posn){
		Node *newnode,*n;
		newnode=(Node*)malloc(sizeof(Node));
		newnode->data=data;
		newnode->next=nullptr;
		newnode->prev=nullptr;
		if(head==nullptr){
			head=newnode;
			return;
		}
		int k=posn-1;// We traverse till posn-1
		if(k==0){// Starting.{
			newnode->next=head;
			head->prev=newnode;
			head=newnode;
		}
		else{
			n=head;
			while(n->next!=nullptr && k!=1){
				k--;
				n=n->next;
			}
			newnode->next=n->next;
			newnode->prev=n;
			if(n->next)
				n->next->prev=newnode;
			n->next=newnode;
		}
	}
	void delfirst(){
		Node *temp;
		if(head==nullptr){
			cout<<"Empty List"<<endl;
			return;
		}
		temp=head;
		head=head->next;
		if(head)
			head->prev=nullptr;
		free(temp);
	}
	void delend(){
		Node *temp,*t2;
		if(head==nullptr){
			cout<<"Empty List"<<endl;
			return;
		}
		if(head->next==nullptr){
			temp=head;
			head=nullptr;
			free(temp);
		}
		else{
			temp=head;
			while(temp->next->next!=nullptr)
				temp=temp->next;
			t2=temp->next;
			temp->next=nullptr;
			free(t2);
		}
	}
	void delposn(int p){
		if(head==nullptr){
			cout<<"Empty List"<<endl;
			return;			
		}
		int k=p-1;
		Node *temp;
		if(k==0){
			temp=head;
			head=head->next;
			if(head)
				head->prev=nullptr;
			free(temp);
		}
		else{
			temp=head;
			while(temp->next!=nullptr && k!=0){
				temp=temp->next;
				k--;
			}
			if(k>0){
				cout<<"Position doesn't exist"<<endl;
				return;
			}
			else{
				temp->prev->next=temp->next;
				if(temp->next)
					temp->next->prev=temp->prev;
				free(temp);
			}
		}
	}
	void dellist(){
		Node *t;
		if(head==nullptr)
			return;
		while(head!=nullptr){
			t=head;
			head=head->next;
			free(t);
		}
	}
};
int main(){
	fastio
	fio
	class DLL L;
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