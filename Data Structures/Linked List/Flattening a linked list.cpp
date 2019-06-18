//Flattening a Linked List
//Link : https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1

/*This is a function problem.You only need to complete the function given below*/
/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of 
    the flattened linked list. */
Node *merge(Node *h1,Node *h2){
    if(!h1)
        return h2;
    if(!h2)
        return h1;
    Node *t,*h;
    if(h1->data>h2->data){
        h=t=h2;
        h2=h2->bottom;
    }
    else{
        h=t=h1;
        h1=h1->bottom;
    }
    while(h1 || h2){
        if(!h1){
            while(h2){
                t->bottom=h2;
                h2=h2->bottom;
                t=t->bottom;
            }
        }
        if(!h2){
            while(h1){
                t->bottom=h1;
                h1=h1->bottom;
                t=t->bottom;
            }
        }
        else{
            if(h1->data>h2->data){
            t->bottom=h2;
            h2=h2->bottom;
            }
            else{
                t->bottom=h1;
                h1=h1->bottom;
            }
            t=t->bottom;
        }
    }
    t->bottom=nullptr;
    return h;
}
Node *mergesort(Node *head){
    Node *f,*s,*q;
    if(head==nullptr || head->bottom==nullptr)
        return head;
    f=s=head;
    while(f && f->bottom){
        f=f->bottom->bottom;
        q=s;
        s=s->bottom;
    }
    f=s;
    q->bottom=nullptr;
    f=mergesort(f);
    s=mergesort(head);
    head=merge(f,s);
    return head;
}
Node *flatten(Node *root)
{
    Node *h=root,*t,*prev;
    root=nullptr;
    
    while(h!=nullptr){
        t=h->next;
        h=mergesort(h);
        if(root==nullptr)
            root=h;
        else
            prev->next=h;
        prev=h;
        h=t;
    }
    Node *head=nullptr;
    h=root;
    while(h!=nullptr){
        t=h->next;
        head=merge(head,h);
        h=t;
    }
    return head;
}