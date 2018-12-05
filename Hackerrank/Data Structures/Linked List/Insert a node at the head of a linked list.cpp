

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	SinglyLinkedListNode *Node;
    Node=new SinglyLinkedListNode(data);
    Node->next=llist;
    llist=Node;
    return llist;
}

