/*

Question:

Given a linkedlist, where each node has a character, 
find the character which appeared the maximum time. 
If you have multiple character as result, return the first character in that list.  

Input: h->e->l->l->o-> ->w->o->r->l->d->NULL
Output : 'l'
Input: y->e->l->h->a->h->a->NULL
Output: 'h'


//Here is the Definition of SchNode for C Language
struct SchNode {
	char ch;
	struct SchNode * nextNode;
	};
  
*/


#include "common.h"
#include "ExpCUtils.h"
char func(struct SchNode * head){
	char x = '\0';
	SchNode * a = head;
	SchNode * b = NULL;
	a = head;
	int count = 0, max = 0;
	while(a!= NULL)
	{
	    b = a->nextNode;
	    count = 1;
	    while(b!= NULL)
	    {
	        if(a->ch == b->ch)
	        {
	            count++;
	        }
	        b = b->nextNode;
	    }
	    if(count > max)
	    {
	        max = count ;
	        x = a->ch;
	    }
	    a = a->nextNode;
	}
	if(max >= 1)
	{
	    return x;
	}
	return NULL;
}
