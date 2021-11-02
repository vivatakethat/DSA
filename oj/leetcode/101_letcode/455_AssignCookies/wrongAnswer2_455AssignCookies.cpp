/*
Wrong Answer
Details 
Input
[1,2,3]
[3]
Output
3
Expected
1

原因:虽然避免了重复但是,还有s没有去重!

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
        int j = 0, i = 0, mark_j = 0;
        for (; i < s.size(); i++)
            for (j = mark_j; j < g.size(); j++) // notice: heap-buffer-overflow on address
            {
                if (s[i] >= g[j])
                {
                    MAXNUM++;
                    mark_j++;
                }
            }

        return MAXNUM;
    }

    int MAXNUM;
};

int main()
{
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};
    Solution take;
    cout << take.findContentChildren(g, s) << endl;
    return 0;
}
