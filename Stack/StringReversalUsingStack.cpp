/*
Time complexity  : O(n)
Space Complexity : O(n) 
Space complexity is O(n) because the extra space is used for the stack of size n.
To achieve better space complexity, use just 2 variables, i=0,j=n-1. 
Swap i and j, increment i and decrement j until i==j.
The time complexity will be 0(n) in this case since the iteration takes place n/2 times.
*/
#include <iostream>
#include <stack> // STL for stack
#include <cstring> //For strlen(char), Because if you use a[i] will not be accessible.
using namespace std;
void reverse(char *a,int n)
{   
	stack <char> b;
	//Push the string to stack. When popped it is reversed, since the stack is last in first out DS
	for(int i=0;i<n;i++)
			b.push(a[i]);

	for(int i=0;i<n;i++)
	       { a[i] = b.top();
	       	 b.pop();
	       }
}
int main()
{
	char a[100];
	cout << "Enter the string to be reversed:" << endl;
	cin >> a;
	int n = strlen(a);
	reverse(a,n);
	cout  << "The reversed string is " << a;
}
