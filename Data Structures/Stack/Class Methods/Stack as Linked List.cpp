#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
class Stack{
private:
	Node *head;
public:
	Stack(){
		head=nullptr;
	}

	void Push(int data){
		Node *nn=(Node*)malloc(sizeof(Node*));
		nn->data=data;
		nn->next=nullptr;
		if(head==nullptr){
			head=nn;
			return;
		}
		Node *t=head;
		while(t->next!=nullptr)
				t=t->next;
		t->next=nn;
	}
	int Pop(){
		if(head==nullptr){
			cout<<"Empty Stack\n";
			return -1;
		}
		if(head->next==nullptr){
			int t=head->data;
			free(head);
			head=nullptr;
			return t;
		}
		Node *t=head,*p;
		while(t->next->next!=nullptr)
			t=t->next;
		p=t->next;
		t->next=p->next;
		int val=p->data;
		free(p);
		return val;
	}
	int Top(){
		if(head==nullptr){
			cout<<"Empty Stack\n";
			return -1;
		}
		Node *t=head;
		while(t->next!=nullptr)
			t=t->next;
		return t->data;
	}
};
int main(){
	
}