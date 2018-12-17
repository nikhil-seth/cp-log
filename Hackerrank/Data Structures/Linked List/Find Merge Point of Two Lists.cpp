

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *curr1,*curr2;
    int l1=0,l2=0;
    curr1=head1;
    curr2=head2;
    while(curr1!=nullptr){
        l1++;
        curr1=curr1->next;
    }
    while(curr2!=nullptr){
        l2++;
        curr2=curr2->next;
    }
    curr1=head1;
    curr2=head2;
    if(l1>l2){
        while((l1-l2)){
            curr1=curr1->next;
            l2++;
        }
    }
    else{
        while((l2-l1)){
            curr2=curr2->next;
            l1++;
        }
    }
    while(curr1!=curr2){
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return curr1->data;
}

