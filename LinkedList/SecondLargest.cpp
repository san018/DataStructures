/* 

QUESTION:
LL - Second Largest Number
Given an LinkedList (where each node has integer) find the second largest element 
(where array has only distinct elements)

Input: 2->10->11->20->-5->40->60->90->1->100->NULL
Output: 90

// here is the definition of SintNode
public class SintNode {
	public int num; 
	public SintNode nextNode; 
	public SintNode(int num){
		this.num = num; 
	}
}

//Here is the Definition of SintNode for C Language
struct SintNode {
	int num;
	struct SintNode * nextNode;
	};

*/

#include "common.h"
#include "ExpCUtils.h"
#include <limits.h>

int func(struct SintNode * head){
	// WRITE YOUR CODE HERE
	int max = head->num, temp = -999999;
	SintNode * x = head;
	
	while(x!= NULL)
	{
	    if(x->num > max)
	    {
	        temp = max;
	        max = x->num;
	    }
	    else if(x->num < max && x->num > temp)
	    {
	        temp = x->num;
	    }
	    x = x->nextNode;
	}
	return temp;
	return 0;
}
