

// Complete the reverse function below.

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
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode *curr;
while(head!=nullptr){
    curr=head;
    head=head->next;
    curr->next=curr->prev;
    curr->prev=head;
}
return curr;
}

