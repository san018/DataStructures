/*
QUESTION: 
You are given pointer to the root of the binary search tree and two values v1 and v2.
You need to return the lowest common ancestor (LCA) of v1 and v2 in the binary search tree.

You only need to complete the function.

Input Format

You are given a function,

node * lca (node * root ,int v1,int v2) {

}
It is guaranteed that v1 and v2 are present in the tree.

Node is defined as :

struct node
{
int data;
node * left;
node * right;
}node;
Output Format

Return the LCA of  and .

Sample Input

         4
       /   \
      2     7
     / \   /
    1   3 6

v1= 1 and v2 = 7
Sample Output

LCA of 1 and 7 is 4 (which is the root). 
Return a pointer to the root in this case.


*/


/*
Node is defined as 

typedef struct node
{
   int data;
   node *left;
   node *right;
}node;

*/


node* lca(node *root, int v1,int v2)
{
        if(root->data < v1 && root->data < v2)  
         return lca(root->right,v1,v2);
        else if(root->data > v1 && root->data > v2)
         return lca(root->left,v1,v2);
        else
         return root;
        
}

