/*
Linked List:
Operations Defined : Insertion at Beginning, End
        			 Deletion at n th position
*/        			 

#include <iostream>
using namespace std;

//The structure for a node has 2 fields. One for data, other for pointer to next node.
struct Node
{
int data;
Node* next;
};

Node* head = NULL;
//Insertion of Node in beginning
void InsertAtBeg(int x)
{
	Node* temp = new Node();
	temp->data = x;
	if(head == NULL)
	{
		cout << "A new list is created "  << endl;
	    head = temp;
		temp->next = NULL;
		cout << "Data inserted is " << temp->data << endl;
	}
	else
	{
		cout << "The data inserted is " << temp->data << endl;
		temp->next = head;
		head = temp;
	}
	
}


//Function to insert at the end
void InsertAtEnd (int x)
{
	Node* temp = new Node();
	temp->data = x;
	Node* b = head;
	if(b== NULL)
	{
		cout << "A new list is created "  << endl;
	    head = temp;
		temp->next = NULL;
		cout << "Data inserted is " << temp->data << endl;
	}
	else{	
	while(b->next!=NULL)
	{
		b =  b->next;
	}
	b->next = temp;
	temp->next = NULL;
	cout << "Data inserted at End is " << temp->data << endl;
	}		
	
}

//Function to delete at particular position
void deleteAtpos(int x)
{
	Node* temp1 = head;
	for(int i=0;i<x-2;i++)
	temp1 = temp1->next;
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	cout << "The element deleted was " << temp2->data << endl;
	delete temp2;
}
//Display function to print the list
void display()
{
	cout << "The list is : ";
	Node* a = head;
	while(a!= NULL)
	{
		cout<< a->data << " ";
		a= a->next;
	}
	cout << endl;
}

int main()
{
	InsertAtBeg(5);
	InsertAtBeg(6);
	InsertAtBeg(7);
	InsertAtBeg(9);
	InsertAtBeg(10);
	display();
	InsertAtEnd (12);
	display();
	deleteAtpos(4);
	display();
	return 0;
}
