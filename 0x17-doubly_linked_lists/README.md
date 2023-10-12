0x17. C - Doubly linked lists


Learning Objectives:

What is a doubly linked list
How to use doubly linked lists


Doubly Linked Lists in C Programming: A doubly linked list is a data structure that consists of a collection of elements, each of which contains a value and two pointers: one pointing to the previous element in the list and another pointing to the next element in the list. This structure allows for efficient insertion and deletion operations, both at the beginning and end of the list.


Operations of Doubly Linked List with Implementation:

1. Add a node at the front of DLL: The new node is always added before the head of the given Linked List. And the newly added node becomes the new head of DLL & maintaining a global variable for counting the total number of nodes at that time.
 
2. Traversal of a Doubly linked list
3. Insertion of a node: This can be done in three ways: 
* At the beginning: The new created node is insert in before the head node and head points to the new node.
* At the end: The new created node is insert at the end of the list and tail points to the new node.
* At a given position: Traverse the given DLL to that position(let the node be X) then do the following:
1. Change the next pointer of new Node to the next pointer of Node X.
2. Change the prev pointer of next Node of Node X to the new Node.
3. Change the next pointer of node X to new Node.
4. Change the prev pointer of new Node to the Node X.



Deletion of a node: This can be done in three ways:

* At the beginning: Move head to the next node to delete the node at the beginning and make previous pointer of current head to NULL.
* At the last: Move tail to the previous node to delete the node at the end and make next pointer of tail node to NULL.
* At a given position: Let the prev node of Node at position pos be Node X and next node be Node Y, then do the following:
1. Change the next pointer of Node X to Node Y.
2. Change the previous pointer of Node Y to Node X.
