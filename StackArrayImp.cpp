/*
Operations defined in the array implementation of stack
1) push()- For inserting element in to the stack
2) pop()- For deleting element from the stack
3) isEmpty() - To check whether the stack is empty or not
*/

#include<iostream>
#define MAX 100000
using namespace std;
class Stack
{
	int top;
    int a[MAX];
	public:
	//Constructor to initialize stack's top to -1.
	Stack()
	{
		top = -1;
	}
	//push function for inserting
	bool push(int x)
	{
		if(top>= MAX)
		{
		cout << "The Stack is full";
		return false;
    	}
    	else
    	{
    		a[++top] = x;
    		cout << x << " is inserted into stack  " << endl;
    		return true;
		}
		
	}
	//pop function for deleting
	void pop()
	{
		if(top < 0)
	    cout << "The stack is empty";
	    else
	    {
	    int x = a[--top];
		cout << x << " popped from stack" << endl;
		}
		
		
	}
	
	//isEmpty function
	
	bool isEmpty()
	{
		return (top<0);
	}
	
		
		
		
};
	
	
	

int main()
{
	Stack s;
	s.push(6);
	s.push(7);
	s.push(9);
	s.push(6);
	cout << s.isEmpty();
	return 0;
}
