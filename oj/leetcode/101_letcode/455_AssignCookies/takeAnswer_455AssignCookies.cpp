
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
        int j = 0, i = 0, mark_j = 0, mark_i = 0;
        for (i = mark_i; i < s.size();)
        {
            for (j = mark_j; j < g.size();) //
            {
                if (s[mark_i] >= g[mark_j])
                {
                    MAXNUM++;
                    mark_j++;
                    mark_i++;
                    break;
                }
                mark_j++;
            }
            mark_i++;
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
