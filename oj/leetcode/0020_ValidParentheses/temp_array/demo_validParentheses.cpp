#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

 
/*
Runtime: 4 ms, faster than 58.48% of C++ online submissions for Valid Parentheses.
Memory Usage: 8.8 MB, less than 6.98% of C++ online submissions for Valid Parentheses.


From:  https://leetcode-cn.com/problems/valid-parentheses/solution/c-zhan-de-jian-dan-shi-xian-yi-dong-by-su-ge/

 Problems:  https://leetcode.com/problems/valid-parentheses/submissions/

 
*/
 
class Solution {
public:
	int get_pos(vector<char> v, char r)//此函数用于返回char型在当前向量中的位置
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == r)
			{
				return i;
			}
		}
        return 1000;
	}    
    
	bool isValid(string s) {
		vector<char> s1 = { '(','[','{' };
		vector<char> s2 = { ')',']', '}'};
		if (std::count (s2.begin(), s2.end(), s[0]) != 0)
		{
			return false;//若第一个元素为后括号，则返回false
		}
		if (s.size() % 2 != 0)
		{
			return false;//若元素个数为奇数，则返回false
		}
		stack<char> res;//建立栈
		int start = 0;
		char top;
		while (start < s.size())
		{
			if (std::count (s1.begin(), s1.end(), s[start]) != 0)//当前字符串是否为前括号
			{
				res.push(s[start]);//入栈
				start++;
				continue;
			}
			if (std::count (s2.begin(), s2.end(), s[start]) != 0)//f当前字符串是否为后括号
			{
				if (res.empty())
					return false;//此时栈中无前括号与其匹配，返回false
				top = res.top();//获得栈顶元素
				if (get_pos(s1,top) != get_pos(s2,s[start]))//判断栈顶前括号是否与此后括号匹配
				{
					return false;
				}
				else
				{
					res.pop();//若匹配，则栈顶元素出栈
					start++;
				}
			}
		}
        if(res.empty())
		    return true;//如果栈顶元素都出栈了，说明所有的前括号都有后括号与其匹配，返回true
        else
            return false;//此时说明栈中还存在前括号无后括号与其匹配，返回false
	}

};
 
int main()
{

 

    return 0;
}