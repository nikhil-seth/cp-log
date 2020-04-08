//Intersection of Two Linked Lists
// Link : https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1
node *mergesort(node *head){
    if(!(head) || !(head->next))
        return head;
    node *f,*s,*t;
    f=s=head;
    while(f->next && f->next->next){
        f=f->next->next;
        s=s->next;
    }
    f=s->next;
    s->next=nullptr;
    f=mergesort(f);
    s=mergesort(head);
    t=nullptr;
    if(f->data>s->data){
        t=head=s;
        s=s->next;
    }
    else{
        t=head=f;
        f=f->next;
    }
    while(f || s){
        if(!f){
            while(s){
            t->next=s;
            s=s->next;
            t=t->next;
            }
        }
        else if(!s){
            while(f){
            t->next=f;
            f=f->next;
            t=t->next;
            }
        }
        else{
            if(f->data>s->data){
                t->next=s;
                s=s->next;
                t=t->next;
            }
            else{
                t->next=f;
                f=f->next;
                t=t->next;
            }
        }
    }
    t->next=nullptr;
    return head;
}
struct node* findIntersection(struct node* head1, struct node* head2){
    head1=mergesort(head1);
    head2=mergesort(head2);
    node *h=nullptr,*t=nullptr,*temp;
    int val;
    while(head1 && head2){
        if(head1->data<head2->data)
            head1=head1->next;
        else if(head1->data>head2->data)
            head2=head2->next;
        else{
            temp=(node*)malloc(sizeof(node));
            temp->data=head1->data;
            temp->next=nullptr;
            if(h==nullptr)
                t=h=temp;
            else{
                t->next=temp;
                t=t->next;
            }
            head1=head1->next;
            head2=head2->next;
        }
    }
    return h;
}