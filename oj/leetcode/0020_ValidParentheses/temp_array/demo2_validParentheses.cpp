

/*

Runtime: 4 ms, faster than 58.48% of C++ online submissions for Valid Parentheses.
Memory Usage: 8.4 MB, less than 96.12% of C++ online submissions for Valid Parentheses.


FROM:  https://leetcode-cn.com/problems/valid-parentheses/solution/c-zhan-de-jian-dan-shi-xian-yi-dong-by-su-ge/
Problems: https://leetcode.com/problems/valid-parentheses/submissions/
*/


#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) {
            return true;
        }
        map<char, char> sMap = {{')', '('},
                                {'}', '{'},
                                {']', '['}};
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                if (sMap[s[i]] != st.top()) {
                    st.push(s[i]);
                } else {
                    st.pop();
                }
            }
            if (st.size() > s.size() / 2) {
                return false;
            }
        }
        return st.empty();
    }
};

 
int main()
{
string a="{{{{}}}}";
Solution take;
  cout<<take.isValid(a)<<endl;

    return 0;





}