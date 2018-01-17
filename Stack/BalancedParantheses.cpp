/*
Hackerrank Solution for the Balanced Parantheses Problem
Can be solved using Stack and also using Palindrome Logic
Here, stack STL is used.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
bool isPair(char a, char b)
{
        if(a == '{'  && b=='}' )
              return true;
        else if(a=='(' &&  b==')')
               return true;
       else if(a=='[' &&  b== ']')    
               return true;
        
       return false; 
}

bool check(string s)
{
        stack <char> c;
        for(int i=0;i<s.length();i++)
        {
               
              if(s[i]=='{' || s[i]=='[' || s[i] == '(')
                      c.push(s[i]);
                else if (s[i]=='}' || s[i]==']' || s[i] == ')')
                {
                        if(c.empty() || (!isPair(c.top(),s[i])))
                        {
                                return false;
                        }
                        else
                        {
                                c.pop();
                        }
                }
                
        }        
                
        if(c.empty() == true)
                return true;
        else
                return false;
                
        }
 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
        string b;
        cin >> b;
        if(check(b))
                cout << "YES" << endl;
        else
                cout << "NO" << endl;
        } 
    return 0;
}
