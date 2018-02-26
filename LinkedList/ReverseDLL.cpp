/*
QUESTION: - Hackerrank Solution
You’re given the pointer to the head node of a doubly linked list. Reverse the order of the nodes in the list. 
The head node might be NULL to indicate that the list is empty.

Input Format 
You have to complete the Node* Reverse(Node* head) method which takes one argument - the head of the doubly linked list.
You should NOT read any input from stdin/console.

Output Format 
Change the next and prev pointers of all the nodes so that the direction of the list is reversed. 
Then return the head node of the reversed list. Do NOT print anything to stdout/console.

Sample Input

NULL 
NULL <-- 2 <--> 4 <--> 6 --> NULL

Sample Output

NULL
NULL <-- 6 <--> 4 <--> 2 --> NULL
Explanation 
1. Empty list, so nothing to do. 
2. 2,4,6 become 6,4,2 o reversing in the given doubly linked list.

*/

/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

/*
Process :
1) Store the value of head in current node.
2) Iterate through each node
3) While iterating store the current->next in a temporary variable and swap the next and prev pointer
4) Update the prevNode with current (since reverse)
5) Atlast assign the head to the prevNode

*/


Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
        Node* current = head;
        Node* prevNode = NULL;
        Node* nextNode = NULL;
        while(current != NULL)
        {
                nextNode = current->next;
                current->next = prevNode;
                current->prev = nextNode;
                prevNode = current;
                current = nextNode;
        }
        head = prevNode;
        return head;
}
