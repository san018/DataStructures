/*QUESTION:
In a given DoubleLinkedList (where each node has a character), 
there is one character which appears twice. 
Write a function to find the character and return it. 

Input: NULL<-h<=>e<=>l<=>l<=>o->NULL
Output : 'l'
Input: NULL<-a<=>s<=>d<=>f<=>g<=>h<=>j<=>a->NULL
Output: 'a'


//here is the class definition of DchNode
public class DchNode {
	public char ch; 
	public DchNode nextNode; 
	public DchNode prevNode; 
	public DchNode(char ch){
		this.ch = ch; 
	}
}

//Here is the Definition of DchNode for C Language
struct DchNode {
	char ch;
	struct DchNode * nextNode;
	struct DchNode * prevNode;
	};



*/
#include "common.h"
#include <string.h>
char func(struct DchNode * head){
      char a = '\0';
      //Store the value of head node. 
      DchNode* x = head;
      DchNode* y = NULL;
      while(x->nextNode!=NULL)
      {
          y = x->nextNode;
          while(y>nextNode != NULL)
          {
              if(x->ch == y->ch)
              {
                  a = x->ch;
                  break;
              }
              y = y->nextNode;
          }
          x = x->nextNode;
      }
return a;
}











