
/*
改建:
这个代码只遍历了一遍.



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
        int next = cursor + 1;

        for (; next < intervals.size();) //
        {
            if (intervals[cursor][1] > intervals[next][0])
            {

                count++;
                if (intervals[cursor][1] < intervals[next][1]) //越过大的:next往右边移动
                {
                    cursor = next + 1;

                    next = cursor + 1;
                    continue;
                }

                /*
                这里分2种情况;
//--->
                1. cursoe[0] == next[0] && cursoe[1] == next[1] 
                next往右移动,cursor

                2.  cursoe[0] == next[0] 但是cursoe[1] > next[1] 

                cursor=next;
                next=next+1;
//-----<
                */
                if ((intervals[cursor][0] == intervals[next][0]) && (intervals[cursor][1] > intervals[next][1])) //越过左边的
                {
                    cursor = next;
                    next++;

                    // cursor = next;
                    // next = next + 1;
                    continue;
                }
                if (intervals[cursor][0] == intervals[next][0])
                {
                    // cursor = next + 1;
                    cursor = next + 1;

                    next = cursor + 1;
                    // next++;
                    continue;
                }
            }
            //     cursor = next;
            cursor = next + 1;

            next = cursor + 1;
            // next++;
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

#if 0
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


    // wrong Answer:
    vector<vector<int>> a4 = {{1, 2},
                              {1, 2},
                              {1, 2},
                              {1, 2}};


    cout << "result4:" << take.eraseOverlapIntervals(a4) << endl;





    vector<vector<int>> a5 = {{1, 100},
                              {11, 22},
                              {1, 11},
                              {2, 12}};

    cout << "result5:" << take.eraseOverlapIntervals(a5) << endl;

    /*
这个代码只遍历了一遍,
第一轮: 移除 13  返回 counter=1;
但是剩下的    {3,5}  {4,6}并不连续的!




*/

   

    vector<vector<int>> a7 = {{1, 2},
                              {1, 2},
                              {1, 2}};

    cout << "result7:" << take.eraseOverlapIntervals(a7) << endl;

 

    // Limit Time
    vector<vector<int>> a4 = {{1, 2},
                              {2, 3},
                              {3, 4},
                              {1, 3}};

    cout << "result4:" << take.eraseOverlapIntervals(a4) << endl;

#endif

    vector<vector<int>> a6 = {{0, 2},
                              {1, 3},
                              {2, 4},
                              {3, 5},
                              {4, 6}};

    cout << "result6:" << take.eraseOverlapIntervals(a6) << endl;

    return 0;
}

/*
 
Wrong Answer
Details 
Input
[[0,2],[1,3],[2,4],[3,5],[4,6]]
Output
1
Expected
2





*/