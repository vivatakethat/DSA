

/*

anser from:   https://haren-lin-1.gitbook.io/leetcode-training/array/1476.-subrectangle-queries

https://leetcode.com/problems/subrectangle-queries/discuss/685415/C%2B%2B-easy-understand-This-probably-should-not-be-a-medium-question

https://leetcode.com/problems/subrectangle-queries/


*/

#include <iostream>
#include <vector>
using namespace std;

class SubrectangleQueries
{
public:
    SubrectangleQueries(vector<vector<int>> &snapshots)
    {

        base = snapshots;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        vector<int> snap = {row1, col1, row2, col2, newValue};
        snapshots.push_back(snap);
    }

    int getValue(int row, int col)
    {
        int n = snapshots.size(); // row
        for (int i = n - 1; i >= 0; i--)
        {
            if (row >= snapshots[i][0] && row <= snapshots[i][2] && col >= snapshots[i][1] && col <= snapshots[i][3]) return snapshots[i][4];
        }
        //  base= snapshots;//take_debug
        return base[row][col];
    }

public:
    vector<vector<int>> snapshots;
    vector<vector<int>> base;
};

int main()
{
    //printf("line:%d\n",__LINE__);
    vector<vector<int>> data = {{1, 2, 1}, {4, 3, 4}, {3, 2, 1}, {1, 1, 1}};
    SubrectangleQueries take(data);

    for (int i = 0; i < data.size(); i++)
    {
        for (int j = 0; j < data[i].size(); j++)
            printf("%d ", data[i][j]);

        printf("\n");
    }

    take.updateSubrectangle(0, 0, 1, 2, 5);

    printf("\ngetvalue:%d\n", take.getValue(1, 0));
        printf("\ngetvalue:%d\n", take.getValue(0, 0));
    cout << "----updateSubrectangle(0, 0, 1, 2, 5)--->getValue(1, 0));----<<" << endl;

    cout << "--------<take.snapshots.size=" << take.snapshots.size() << "--------------------<<" << endl;

    for (int i = 0; i < take.snapshots.size(); i++)
    {
        for (int j = 0; j < take.snapshots[i].size(); j++)
            printf("%d ", take.snapshots[i][j]);

        printf("\n");
    }
    printf("----line:%d-----------------\n", __LINE__);

    for (int i = 0; i < take.base.size(); i++)
    {
        for (int j = 0; j < take.base[i].size(); j++)
            printf("%d ", take.base[i][j]);

        printf("\n");
    }

    return 0;
}






