/*

Wrong Answer
Details 
Input
[1,2,3]
[1,1]
Output
2
Expected
1

原因:这个答案没有去重
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        if (g.size() == 0 || s.size() == 0)
            return 0;

        MAXNUM = 0;
        int j = 0, i = 0;
        for (; i < s.size(); i++)
            for (; j < g.size(); j++) //
            {
                if (s[i] >= g[j])
                    MAXNUM++;
            }

        return MAXNUM;
    }

    int MAXNUM;
};

int main()
{
    vector<int> g = {10, 9, 8, 7};
    vector<int> s = {5, 6, 7, 8};
    Solution take;
    cout << take.findContentChildren(g, s) << endl;
    return 0;
}
