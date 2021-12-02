#include<string>
#include<iostream>


/*

https://leetcode.com/problems/valid-parentheses/description/

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true
*/
using namespace std;

class Solution {
public:
    bool isValid(string s) {
    const string t_source=s;
        if(t_source.empty()||t_source.size()%2!=0)
        return false;
     
        
    for(int i_head=0,len=t_source.size(),i_end=len;i_head++,i_end--;)  //takethat:
            {
                    if(t_source[i_head]==t_source[i_end])
                        continue;
                     else if(i_head!=i_end)
                        {
                            return false;
                        }
                        else
                        {
                            return true;
                        }
                        
                

            }
    }
};
 
int main()
{
      Solution take;
          string a="{{}}";
    if(take.isValid(a))
        cout<<"true"<<endl;
      else
    cout<<"false"<<endl;


    return 0;
}