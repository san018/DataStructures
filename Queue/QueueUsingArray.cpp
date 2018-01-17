/* Queue - Array based Implementation
   Queue is a FIFO DataStructure
   Insertion i.e (Enqueue) - takes place in the rear end of the array or LL.
   Deletion i.e (Dequeue) - takes place in the front end of the array or LL.
   IsEmpty - To check if the queue is empty
   All operations must have same time complexity : O(1).
   
   Note: Say for example, if there's a fixed array of size 10, and we keep deleting element from the first by 
   decrementing the index, The space in the front gets wasted. Hence in a array based implementation of a queue
   A circular array (By using mod) is used so as to prevent the space from getting wasted. 
*/

#include <iostream>
#define MAX 100
using namespace std;

class queue{
	
	
	int front,rear;
	int a[MAX];
	
	
	public:
		
		
		queue()
		{
			front = -1;
			rear = -1;
		}
		
		
		bool enqueue(int x)
		{
			if(front == -1 && rear == -1) //when queue is empty
			{
				front =0;
				rear =0;
				a[rear] = x;
				cout << "The element enqueued is " << a[rear] << endl;
			}
			else if(rear+1 == MAX)//when queue is full
			{
				cout << "The queue is full" << endl;
			}
			else
			{
				rear = (rear+1)%MAX;
				a[rear] = x;
				cout << "The element enqueued is " << a[rear] << endl;
			}		
		}
		
		
		void dequeue()
		{
			if(front==-1 && rear == -1)
			cout << "The queue is empty, so no element to be removed" << endl;
			else if(front==rear)
			{
				cout << "The element deleted is " << a[front] << endl;
				front = -1;
				rear = -1;
			}
			else 
			{	
			cout << "The element deleted is " << a[front] << endl;
			front  = front+1;
			}
			
		}
		
		
		void isEmpty()
		{
	     if(front == -1 && rear == -1) cout << "True" << endl;
	     else
	     cout << "False" << endl;
		}
		
		
		void display()
		{  
			cout << "The queue is : ";
			for(int i=front;i<=rear;i++)
			cout << a[i] << " ";
			cout << endl;
		}
	
	
};
int main()
{
	queue q;
	q.dequeue();
	q.enqueue(5);
	q.enqueue(9);
	q.enqueue(11);
	q.enqueue(10);
	q.enqueue(18);
	q.dequeue();
	q.isEmpty();
	q.display();
	return 0;
}
