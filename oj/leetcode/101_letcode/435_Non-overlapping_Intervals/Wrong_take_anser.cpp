

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
            secEle = intervals[i + 1];

            if (secEle[0] != firEle[1] || (firEle[0] == secEle[0] && firEle[1] == secEle[1]))
            {

                count++;
            }
        }
        return count;
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

    return 0;
}







