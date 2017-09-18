/*
Binary Search Tree is a recursive Data Structure in which the following constraints must be satisfied

1) The parent node can have atmost two children
2) The value of each node in the left subtree should be lesser or equal to the value in root node
3) The value of each node in the right subtree should be greater to the value in root node

Advantages:
* Cost of the operations (insertion, deletion and searching) is O(log n) in average case
* To avoid getting into worse case, make sure the height of the tree is less.
* Efficient way for storing naturally heirarchial data, like File System
*/

#include <iostream>
using namespace std;

//Node Structure for a BST
struct Node
{
	int data;
	Node* left;
	Node* right;
};

	/*
As we keep the head node in linkedlist, we require the root node in BS trees. Initially, it is set to
null since the tree is empty. Root pointer make it global because it has to be used in all functions.
*/
Node* root = NULL;


//Function to create a newNode and it returns the address of the new Node
Node* CreateNewNode(int data)
{
	Node* newNode = new Node();
	newNode-> data = data;
	newNode->left = NULL;
	newNode->right= NULL;
	return newNode;
}

//Function to insert into a BST and it returns the root
Node* Insert( Node* root, int data)
{
	if(root == NULL)
	{
		root = CreateNewNode(data);		
	}
	else if(data <= root->data)
	{
		root->left = Insert(root->left,data);
	}
	else if(data > root->data)
	{
		root->right = Insert(root->right, data);
	}
	return root;
}

//Function to search the number in a BST and this returns a boolean
bool Search(Node* root, int data)
{
	if(root == NULL)
	return false;
	else if(root->data == data)
	return true;
	else if(data <= root->data)
	return Search(root->left, data);
	else if(data > root->data)
	return Search(root->right, data);
	
}



int main()
{
	root = Insert(root,20);
	root = Insert(root,10);
	root = Insert(root,25);
	root = Insert(root,19);
	root = Insert(root,29);
	int n;
	cout << "Enter the number to be searched" << endl;
	cin >> n;
	if(Search(root, n)== true)
	{
		cout << "Number found" << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}
	
	return 0;
}
