

// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *curr,*prev;
    curr=prev=head;
    while(prev!=nullptr){
        if(positionFromTail<0){
            curr=curr->next;
        }
        prev=prev->next;
        positionFromTail--;
    }
    return curr->data;
}

