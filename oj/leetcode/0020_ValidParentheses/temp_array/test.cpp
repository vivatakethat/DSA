 
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

#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;


class Solution
{
public:
             
 bool isValid(string s)
 {
if(s.empty())
    return true;

int len=s.size();
m_stack=new char[len];


 }



private:
char m_stack*;

void push(char )
{
        
}


int TOP=-1;



};
int main()
{




return 0;
}