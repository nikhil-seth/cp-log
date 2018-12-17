

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *curr,*del,*prev;
    if(head==nullptr || head->next==nullptr)
        return head;
    curr=head;
    while(curr!=nullptr){
        prev=curr->next;
        while(prev!=nullptr){
            if(prev->data==curr->data){
                del=prev;
                prev=prev->next;
                curr->next=prev;
                delete del;
            }
            else
                break;
        }
        curr=curr->next;
    }
    return head;
}

