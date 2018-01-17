/* 
Inorder traversal is a type of depth-first Traversal in which the traverses the tree in the order left->root->right.
*/


/*Question from Hackerrank : 
Complete the inOrder function in your editor below, which has  parameter: a pointer to the root of a binary tree. It must print the values in the tree's inorder traversal as a single line of space-separated values.

Input Format

Our hidden tester code passes the root node of a binary tree to your inOrder function.

Constraints

1 Nodes in the tree  500

Output Format

Print the tree's inorder traversal as a single line of space-separated values.

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

1 2 3 4 5 6 
*/

//Code: 
/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {

        if(root == NULL) return;
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
        
}
