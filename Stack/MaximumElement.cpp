/* QUESTION :

You have an empty sequence, and you will be given  queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.
Input Format

The first line of input contains an integer, . The next  lines each contain an above mentioned query. (It is guaranteed that each query is valid.)

Constraints

1 <= N <= 10^5
1 <= x <= 10^9
 

Output Format

For each type  query, print the maximum element in the stack on a new line.

Sample Input

10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3
Sample Output

26
91

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int n;
        cin >> n;
        stack <int> s;
        stack <int> max;
        max.push(0);
        while(n--)
        {       int a;
                cin >> a;
                if(a==1)
                {         cin >> a;
                   s.push(a);
                   if(max.top() <= a)
                   {
                           max.push(a);
                   }
                }
                else if(a==2)
                {
                        if(s.top() == max.top()) max.pop();
                        s.pop();
                }
                else if(a==3)
                {
                        cout << max.top() << endl;
                }      
                
                
                
        }
    return 0;
}

