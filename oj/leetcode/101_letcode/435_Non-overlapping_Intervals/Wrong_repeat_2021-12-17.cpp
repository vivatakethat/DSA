/*
Wrong Answer
Details 
Input
[[1,2],[1,2],[1,2]]
Output
4
Expected
2


 

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(vector<int> a, vector<int> b)
{
    if (a[0] < b[0])
        return true;
    return false;
}
class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {

        if (intervals.empty())
            return 0;
        // step 1:
        sort(intervals.begin(), intervals.end(), compare);
        int count = 0;
        int cursor = 0;
        int next = 1;
        for (; next < intervals.size();)//take这里有错误
        {
            if (intervals[cursor][1] > intervals[next][0])
            {
                count++;
            }

            if (intervals[cursor][1] < intervals[next][1])
            {
                next++;
                continue;
            }
            // cursor++;
            cursor = next;
            count++;
            next++;
        }
        return count;
    }
};
int main()
{
    Solution take;

    // vector<vector<int>> a = {{1, 2},
    //                          {1, 3},
    //                          {1, 4}};

    // cout << "result:" << take.eraseOverlapIntervals(a) << endl;

    vector<vector<int>> a2 = {{1, 2},
                              {2, 3},
                              {3, 4},
                              {1, 3}};

    cout << "result2:" << take.eraseOverlapIntervals(a2) << endl;

    vector<vector<int>> a3 = {{1, 2},
                              {2, 3},
                              {3, 4},
                              {1, 3}};

    cout << "result3:" << take.eraseOverlapIntervals(a3) << endl;

    return 0;
}
