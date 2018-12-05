

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
  SinglyLinkedListNode *Node,*curr;
  Node=new SinglyLinkedListNode(data);
  if (head == nullptr) {
    head = Node;
    return head;
    }
   curr=head;
    while(curr->next!=nullptr)
        curr=curr->next;
    curr->next=Node;
    return head;



	

}

