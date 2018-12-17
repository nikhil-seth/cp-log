

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *curr1,*curr2;
    curr1=head;
    curr2=head;
    while(curr1!=nullptr && curr2!=nullptr && curr2->next!=nullptr){
        curr1=curr1->next;
        curr2=curr2->next->next;
        if(curr1==curr2)
            return 1;
    }
    return 0;
}

