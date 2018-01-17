/* The Linkedlist Implementation of Stack
The functions defined : 
					1)  push
					2)  pop
					3) top
*/
#include <iostream>
//Include the Cstdlib to use 'free'
#include <cstdlib>
using namespace std;
struct Node{
	int data;
	Node * link;
};

Node *top = NULL;

void push(int x)
{
	Node* temp = new Node();
	temp->data = x;
    temp->link = top;
    top = temp;
    cout << "The data inserted is " << top->data << endl;
}

void pop()
{
   Node* temp = new Node();
   if(top==NULL) 
   {
   	cout << "The stack is empty";
   	return;
   }
   temp = top;
   cout << "The data popped is " << temp->data << endl;
   top = top->link;
   free(temp);
}

void topElement()
{
	cout << "The top element is " << top->data << endl;
}

int main()
{
	
	push(2);
	push(4);
	push(8);
	pop(); // Pops 8	
	topElement(); //Returns 4
	return 0;
}
