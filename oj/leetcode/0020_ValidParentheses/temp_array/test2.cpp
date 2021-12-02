/*
题目:https://leetcode.com/problems/valid-parentheses/solution/
答案:  https://github.com/MisterBooo/LeetCodeAnimation/blob/master/notes/LeetCode%E7%AC%AC20%E5%8F%B7%E9%97%AE%E9%A2%98%EF%BC%9A%E6%9C%89%E6%95%88%E7%9A%84%E6%8B%AC%E5%8F%B7.md
 
*/
#include<iostream>
#include<string>
#include<stack>

using namespace std;
class Solution {
public:
    bool isValid(string s) {

        stack<char> stack;
        for( int i = 0 ; i < s.size() ; i ++ )
            if( s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push(s[i]);
            else{

                if( stack.size() == 0 )
                    return false;  //

                char c = stack.top();
                stack.pop();

                char match;
                if( s[i] == ')' ){
                    match = '(';
                }
                else if( s[i] == ']' ){
                    match = '[';
                }
                else{
                    match = '{';
                }

                if(c != match)  return false;//检查退栈的元素 是否匹配
            }

        if( stack.size() != 0 )
            return false;

        return true;
    }
};



int main()
{

string str_eg="[[]]";
 Solution takethat;
 cout<<takethat.isValid(str_eg);


    return 0;
}


