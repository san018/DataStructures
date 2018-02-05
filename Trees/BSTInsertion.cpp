/* QUESTION:

You are given a pointer to the root of a binary search tree and a value to be inserted into the tree. 
Insert this value into its appropriate position in the binary search tree and return the root of the updated binary tree.
You just have to complete the function.
Input Format

You are given a function,

node * insert (node * root ,int value) {

}
node is defined as :

struct node
{
int data;
node * left;
node * right;
}node;
Constraints

No. of nodes in the tree  500
Output Format

Return the root of the binary search tree after inserting the value into the tree.

Sample Input

        4
       / \
      2   7
     / \
    1   3
The value to be inserted is 6.

Sample Output

         4
       /   \
      2     7
     / \   /
    1   3 6
*/


/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/
node* createNewNode(int value)
{
    node* temp = new node();
    temp->data = value;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

node * insert(node * root, int value) {

    if(root==NULL)
       root = createNewNode(value);
    else if(value < root->data)
        root->left = insert(root->left,value);
    else if(value > root->data)
        root->right = insert(root->right,value);
    

   return root;
}
