/*
QUESTION:
You’re given the pointer to the head node of a linked list and a specific position. 
Counting backwards from the tail node of the linked list, get the value of the node at the given position.
A position of 0 corresponds to the tail, 1 corresponds to the node before the tail and so on.

Input Format 
You have to complete the int GetNode(Node* head, int positionFromTail) method which takes two arguments - the head of the linked list and the position of the node from the tail. positionFromTail will be at least 0 and less than the number of nodes in the list. You should NOT read any input from stdin/console.

Constraints 
Position will be a valid element in linked list.

Output Format 
Find the node at the given position counting backwards from the tail. Then return the data contained in this node. Do NOT print anything to stdout/console.

Sample Input

1 -> 3 -> 5 -> 6 -> NULL, positionFromTail = 0
1 -> 3 -> 5 -> 6 -> NULL, positionFromTail = 2
Sample Output

6
3

*/

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
/* Logic Behind the code:
   We maintain two pointers temp, answer. We increment the index and answer pointer only when the index has reached more than the position from tail.
   Hence, a distance is created between the temp and answer which is exactly same as the position from tail.
   When the temp reaches the end, the answer will be n positon behind the tail.
*/
int GetNode(Node *head,int positionFromTail)
{
        int index = 0;
        Node* temp = head;
        Node* answer = head;
        while(temp!=NULL)
        {
              temp = temp->next;
              if (index> positionFromTail)
              {
                      answer = answer->next;
              }
              index++;
        }
        return answer->data;
}
