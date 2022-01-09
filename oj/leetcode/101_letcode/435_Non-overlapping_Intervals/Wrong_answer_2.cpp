

#include <iostream>
#include <vector>
using namespace std;
template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i)
    {
        os << v[i];
        if (i != v.size() - 1)
        {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {

        if (intervals.empty())
            return 0;
        int count = 0;
        int n = intervals.size();

        vector<int> firEle;
        vector<int> secEle;
        for (int i = 0; i < n - 1; i++)
        {
            firEle = intervals[i];
            for (int j = 1; j < n; j++)
            {

                secEle = intervals[j];

                if (firEle[1] == secEle[0])
                {

                    count++;
                }
            }
        }
        //   cout << "count" << count << endl;

        return n - count - 1;
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
    vector<vector<int>> sample3 = {{0, 1}, {3, 4}, {1, 2}};

    cout << "ample3 :" << take.eraseOverlapIntervals(sample3) << endl;
    return 0;
}




