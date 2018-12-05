

// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
DoublyLinkedListNode *curr,*nn,*curr2;
nn=new DoublyLinkedListNode(data);
if(head==nullptr){
    head=nn;
    return nn;
}
if((head->data)>=data){
    head->prev=nn;
    nn->next=head;
    return nn;
}
curr=head;
while(curr!=nullptr){
    if(curr->data>=data)
        break;
    curr2=curr;
    curr=curr->next;
}
curr=curr2;
nn->prev = curr;
if(curr->next==nullptr)
    nn->next=nullptr;
else{
  curr2 = curr->next;
  curr2->prev = nn;
  nn->next = curr2;
}
curr->next = nn;
return head;
}
