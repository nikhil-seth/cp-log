

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *curr,*nn;
    curr=nullptr;
    while(head!=nullptr){
        nn=head;
        head=head->next;
        nn->next=curr;
        curr=nn;
    }
    return curr;

}

