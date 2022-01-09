
/*

https://www.cnblogs.com/grandyang/p/6017505.html
解法2:
*/


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;      
        sort(intervals.begin(), intervals.end());
        int res = 0, n = intervals.size(), endLast = intervals[0][1];
        for (int i = 1; i < n; ++i) {
            int t = endLast > intervals[i][0] ? 1 : 0;//  
            endLast = t == 1 ? min(endLast, intervals[i][1]) : intervals[i][1];
            res += t;
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

    //     Wrong Answer
    // Details
    // Input
    // [[1,100],[11,22],[1,11],[2,12]]
    // Output
    // 3
    // Expected
    // 2
    vector<vector<int>> sample2 = {{1, 100}, {11, 22}, {1, 11}, {2, 12}};

    cout << "ample2 :" << take.eraseOverlapIntervals(sample2) << endl;

    /*
Wrong Answer
Details
Input
[[0,1],[3,4],[1,2]]
Output
1
Expected
0

*/

    vector<vector<int>> sample5 = {{1, 2}, {1, 2}, {1, 2}};

    cout << "ample5 :" << take.eraseOverlapIntervals(sample5) << endl;
    vector<vector<int>> sample3 = {{0, 1}, {3, 4}, {1, 2}};

    cout << "ample3 :" << take.eraseOverlapIntervals(sample3) << endl;

    //  [[1,2],[2,3],[3,4],[1,3]]
    vector<vector<int>> sample4 = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};

    cout << "ample3 :" << take.eraseOverlapIntervals(sample4) << endl;

    // [[1,2],[1,2],[1,2]]

    return 0;
}
