#include<string>
#include<iostream>

/*
这个答案少了情况  "(]"
*/

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
      if(s.size()==0)
      return true;
      if(s.size()%2!=0)
      return false;
const string t_str=s;
const int s_len=t_str.size();
Stack=new char[s_len]; 

for(int i=0;i<s_len;i++)
{
    
      if(t_str[i]=='('||t_str[i]=='{'||t_str[i]=='[')
             push(t_str[i]);
  
    else if(isEmpty())
    {
      return false;
    }
   else if(antoherSide(t_str[i])==peek())   {   
    
       pop();
      }
      else{
        return false;
      }
}


if(isEmpty())
return true;
else return false;

    return true;//没有这句，leetcode 会报错
    }


void push(char value)
{

   
  TOP++;
  Stack[TOP]=value;
    
  
}
char peek()
{
  if(isEmpty())
  return 0;
    return Stack[TOP];
}
void pop()
{
  Stack[TOP]=0;
  TOP--;

}

bool isEmpty()
{
    if(TOP==-1)
    return true;
    else return false;
return true;
}
     
  private:
    int TOP=-1;
    char *Stack;
 char antoherSide(char oneParentheses)
    {
        if(oneParentheses=='{')
        return '}';
        else if (oneParentheses=='}')
        return '{';
        else if(oneParentheses=='[')
        return ']';
        else if(oneParentheses==']')
        return '[';
          else if(oneParentheses=='(')
        return ')';
        else if(oneParentheses==')')
        return '(';
        return 'x';
    }
};



 
int main()
{
      Solution take;
          string a="()"; 
       
    if(take.isValid(a))
        cout<<"true"<<endl;
      else
    cout<<"false"<<endl;
  // cout<<__LINE__<<endl;

    return 0;
}


