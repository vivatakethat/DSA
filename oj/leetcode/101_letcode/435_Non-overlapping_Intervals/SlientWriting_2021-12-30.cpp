
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {

        if (intervals.size() == 0)
            return 0;
        int last = 0, rest = 0;
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size(); i++)
        {
            if (intervals[last][1] > intervals[i][0])
            {
                rest++;
                if (intervals[last][1] > intervals[last][1])
                    last = i;
            }
            else
                last = i;
        }
        return rest;
    }
};

/*

Wrong Answer
Details 
Input
[[1,2],[2,3],[3,4],[1,3]]
Output
2
Expected
1


*/

