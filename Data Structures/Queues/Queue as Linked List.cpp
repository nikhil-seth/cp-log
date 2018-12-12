#include<bits/stdc++.h>
using namespace std;
struct ListNode{
	int data;
	ListNode *next;
};
struct Queue{
	ListNode *front,*rear;
};
Queue *CreateQueue(){
	Queue *Q;
	Q=(Queue*)malloc(sizeof(Queue));
	if(!Q){
		cout<<"Error";
		return nullptr;
	}
	Q->front=Q->rear=nullptr;
	return Q;
}
int IsEmpty(Queue *Q){
	if(Q->front==nullptr)
		return 1;
	return 0;
}
void EnQueue(Queue *Q,int data){
	ListNode *newNode;
	newNode->data=data;
	newNode->next==nullptr;
	if(IsEmpty(Q))
		Q->rear=Q->front=newNode;
	else{
		Q->rear->next=newNode;
		Q->rear=newNode;

	}
}
int DeQueue(Queue *Q){
	if(IsEmpty(Q)){
		cout<<"Underflow";
		return INT_MIN;
	}
	int data=Q->front->data;
	ListNode *curr;
	curr=Q->front;
	Q->front=Q->front->next;
	free(curr);
	if(Q->front==nullptr)
		Q->rear=Q->front;
	return data;
}
void DeleteQueue(Queue *Q){
	if(IsEmpty(Q)){
		cout<<"Underflow";
		return;
	}
	ListNode *temp;
	while(!IsEmpty(Q)){
		temp=Q->front;
		Q->front=Q->front->next;
		free(temp);
	}
	free(Q);
}
int main(){
	return 0;
}