/*
https://leetcode.com/problems/valid-parentheses/solution/

错误想法:
误以为左右括号是对称的
`([)]`  j,k是无效的


*/
#include<iostream>
#include<string>

using namespace std;
class Solution
{
public:
bool isValid(string str)
{
    if(str.size()%2!=0)  //数量上判断
    {
    return false;
    }

for(int j=0,k=0;j<str.size();j++,k=j-1)
{
        if(str[j]=='['||str[j]=='{'||str[j]=='(')
        {
            len++;
            continue;
        }
        else   if(return_brackets(str[k])==str[j]) 
        {
         len--;  
         continue; 
        }
        else return false;
            if(len==0)
            {
            return true;
            }
}

 return true;//防止 leetcode报错
}
private:
int len=0;
    char return_brackets(char brackets)
    {
            if(brackets=='(')
            return ')';
            else if(brackets=='{')
            return '}';
            else if(brackets=='[')
                return ']'; 
                else if(brackets==')')
                return '(';
                else if(brackets==']')
                return '[';

           //   return 'c';         
    }

};
int main()
{

string str_eg="[[]]";
 Solution takethat;
 cout<<takethat.isValid(str_eg);


    return 0;
}


