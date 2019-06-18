//Reverse a Linked List in groups of given size.
//Link : https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

struct node *rev(struct node *head){
    if(head==nullptr || head->next==nullptr)
        return head;
    struct node *next,*prev=nullptr;
    while(head!=nullptr){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}
struct node *reverse (struct node *head, int k){
    if(!head || !(head->next))
        return head;
    node *h,*h2;
    h=head;
    int n=0;
    while(h){
        n++;
        h=h->next;
    }
    int i=ceil(float(n)/k);
    h=h2=head;
    node *prev=nullptr,*next;
    while(i>=1){
        i--;
        for(int j=1;j<k && h2->next!=nullptr;j++)
            h2=h2->next;
        next=h2->next; //9-2
        h2->next=nullptr;
        h2=rev(h);
        if(prev==nullptr)
            head=h2;
        else
            prev->next=h2;
        prev=h;
        h=h2=next;
    }
    return head;
}