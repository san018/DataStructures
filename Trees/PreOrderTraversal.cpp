/* 

Preorder is a type of Depth First Traversal in which the nodes are visited in the order Root->left->right.
Completes the entire subtree in one direction - left and then goes in the other 

*/

/* Question from Hackerrank :

Complete the preOrder function in your editor below, which has  parameter: a pointer to the root of a binary tree. It must print the values in the tree's preorder traversal as a single line of space-separated values.

Input Format:

Our hidden tester code passes the root node of a binary tree to your preOrder function.

Constraints:

1<= Nodes in the tree <=500 

Output Format

Print the tree's preorder traversal as a single line of space-separated values.

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

1 2 5 3 4 6 

*/

/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
        
        if(root == NULL)
                return;
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);

}
