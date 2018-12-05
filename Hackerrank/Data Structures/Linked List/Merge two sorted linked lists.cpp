

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *curr,*head3;
    if(head1==nullptr && head2==nullptr)
        return nullptr;
    if(head1->data>head2->data){
        head3=head2;
        head2=head2->next;
    }
    else{
        head3=head1;
        head1=head1->next;
    }
    curr=head3;
    while(1){
        if(head2==nullptr && head1==nullptr)
          break;
        if(head1==nullptr){
            curr->next=head2; 
            break;
        }
        if(head2==nullptr){
            curr->next=head1;
            break;
        }
        if(head2->data>head1->data){
            curr->next=head1;
            curr=curr->next;
            head1=head1->next;
        }
        else {
            curr->next = head2;
            curr = curr->next;
            head2 = head2->next;
        }
    }
return head3;
}
