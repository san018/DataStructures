/*Question :

Level-Order Traversal : all nodes in level 1 to n
Use a deque to put the root, left and the right child respectively and then we deque one by one.



You are given a pointer to the root of a binary tree. You need to print the level order traversal of this tree. In level order traversal, we visit the nodes level by level from left to right. You only have to complete the function. For example:

     1
      \
       2
        \
         5
        /  \
       3    6
        \
         4  
For the above tree, the level order traversal is 1 -> 2 -> 5 -> 3 -> 6 -> 4.

Input Format

You are given a function,

void levelOrder(node * root) {

}
Constraints

1 Nodes in the tree  500

Output Format

Print the values in a single line separated by a space.

Sample Input

     1
      \
       2
        \
         5
        /  \
       3    6
        \
         4  
Sample Output

1 2 5 3 6 4

Explanation

We need to print the nodes level by level. We process each level from left to right. 
Level Order Traversal: 1 -> 2 -> 5 -> 3 -> 6 -> 4.

struct node
{
    int data;
    node* left;
    node* right;
}*/


 
#include<queue>
 deque<node*>q;
void levelOrder(node* root) {
   
 if(root!= NULL)
     q.push_back(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop_front();
        cout << temp->data << " ";
        if(temp->left != NULL) q.push_back(temp->left);
        if(temp->right != NULL) q.push_back(temp->right);
    }
  
}
  
