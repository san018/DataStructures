/* 
QUESTION:
You’re given the pointer to the head nodes of two sorted linked lists. 
The data in both lists will be sorted in ascending order.
Change the next pointers to obtain a single, merged linked list which also has data in ascending order.
Either head pointer given may be null meaning that the corresponding list is empty.

Input Format:
You have to complete the Node* MergeLists(Node* headA, Node* headB) method which takes two arguments -
the heads of the two sorted linked lists to merge. You should NOT read any input from stdin/console.

Output Format:
Change the next pointer of individual nodes so that nodes from both lists are merged into a single list. 
Then return the head of this merged list. Do NOT print anything to stdout/console.

Sample Input
1 -> 3 -> 5 -> 6 -> NULL
2 -> 4 -> 7 -> NULL

15 -> NULL
12 -> NULL

NULL 
1 -> 2 -> NULL
Sample Output

1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> NULL
12 -> 15 -> NULL
1 -> 2 -> NULL
Explanation 
1. We merge elements in both list in sorted order and output.
*/

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
        Node* temp = NULL;
        if(headA==NULL)
        {
                return headB;
        }
        if(headB==NULL)
        {
                return headA;
        }
        if(headA->data <= headB->data)
        {
                temp = headA;
                temp->next = MergeLists(headA->next,headB);            
        }
        else {
                temp = headB;
                temp->next = MergeLists(headA, headB->next);
        }
        return temp;
}
