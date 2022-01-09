
/*
[LeetCode] 435. Non-overlapping Intervals 非重叠区间

https://www.cnblogs.com/grandyang/p/6017505.html
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        int res = 0, n = intervals.size(), last = 0;
        sort(intervals.begin(), intervals.end());
        for (int i = 1; i < n; ++i)
        {
            if (intervals[i][0] < intervals[last][1])
            {
                ++res;
                if (intervals[i][1] < intervals[last][1])
                    last = i;
            }
            else //可以连续
            {
                last = i;
            }
        }
        return res;
    }
};

int main()
{

    //      [[1,2],[2,3],[3,4],[1,3]]
    vector<vector<int>> sample1 = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    Solution take;
    cout << "result:" << take.eraseOverlapIntervals(sample1) << endl;

    vector<vector<int>> sample2 = {{1, 100}, {11, 22}, {1, 11}, {2, 12}};

    cout << "ample2 :" << take.eraseOverlapIntervals(sample2) << endl;

    vector<vector<int>> sample6 = {{1, 2}, {1, 2}, {1, 2}};

    cout << "ample6 :" << take.eraseOverlapIntervals(sample6) << endl;
    vector<vector<int>> sample3 = {{0, 1}, {3, 4}, {1, 2}};

    cout << "ample3 :" << take.eraseOverlapIntervals(sample3) << endl;

    //  [[1,2],[2,3],[3,4],[1,3]]
    vector<vector<int>> sample4 = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};

    cout << "ample4 :" << take.eraseOverlapIntervals(sample4) << endl;

    // [[1,2],[1,2],[1,2]]
    // vector<vector<int>> sample5 = {{1, 2}, {1, 2}, {1, 2}};

    // cout << "ample5 :" << take.eraseOverlapIntervals(sample5) << endl;

    return 0;
}
