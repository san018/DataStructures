/* Queue - LinkedList Implementation
   Same operations - Enqueue, Dequeue,Front();
   
		Note: If insertion is done at head TC : O(1)
              But deletion will take TC : O(n)
              Hence, use another pointer to point to last node. 
              
*/


#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x)
{
	Node* temp = new Node();
	temp ->data = x;
	temp->next = NULL;
	
	//If the queue is empty
	if(front == NULL && rear == NULL)
	{	cout << "The element enqueued is " << temp->data << endl;
		rear = temp;
		front = temp;	
	}
	
	//If they are some elements already present in queue
	else
	{	
		cout << "The element enqueued is " << temp->data << endl;
		rear->next = temp;
		temp = rear;
		
	}
	
	
	
}



void dequeue()
{
	
	Node* temp = front;
	if(front == NULL)
	{
		cout << "The queue is empty" << endl;
		return;
	}
	if(front == rear)
	{
		cout << "The element dequeued is " << temp->data << endl;
		front = NULL;
		rear = NULL;
	}
	else
	{
		cout << "The element dequeued is " << temp->data << endl;
		front = front->next;
	}
	
	
}
/*
void display()
{	
  cout << "The list is : ";
  Node* a = front;
    while(a!=NULL)
        {
        cout << a->data ;
        a = a->next;
    }
	
}
*/

int main()
{	
	dequeue();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	dequeue();
	//display();
	
	return 0;
}
