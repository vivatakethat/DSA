// https://haren-lin-1.gitbook.io/leetcode-training/array/1476.-subrectangle-queries
//
// #biweekly 28
// #stack, #4
#include <iostream>
#include <vector>

using namespace std;

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */

// Constraints:

// There will be at most 500 operations considering both methods:
//     updateSubrectangle and getValue.
// 1 <= rows, cols <= 100
// rows == rectangle.length
// cols == rectangle[i].length
// 0 <= row1 <= row2 < rows
// 0 <= col1 <= col2 < cols
// 1 <= newValue, rectangle[i][j] <= 10^9
// 0 <= row < rows
// 0 <= col < cols

// First try. Brute force in contest. 84 ms.
class SubrectangleQueries
{
public:
    vector<vector<int>> rect;
    SubrectangleQueries(vector<vector<int>> &rectangle) { rect = rectangle; }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; ++i)
            for (int j = col1; j <= col2; ++j)
                rect[i][j] = newValue;
    }

    int getValue(int row, int col)
    {
        return rect[row][col];
    }
};

int main()
{
    vector<vector<int>> data = {{1, 2, 1}, {4, 3, 4}, {3, 2, 1}, {1, 1, 1}};
    SubrectangleQueries take(data);

    for (int i = 0; i < take.rect.size(); i++)
    {
        for (int j = 0; j < take.rect[i].size(); j++)
            printf("%d ", take.rect[i][j]);

        printf("\n");
    }

    printf("\ngetvalue:%d\n", take.getValue(0, 2));

    take.updateSubrectangle(0, 0, 3, 1, 7);

    for (int i = 0; i < take.rect.size(); i++)
    {
        for (int j = 0; j < take.rect[i].size(); j++)
            printf("%d ", take.rect[i][j]);

        printf("\n");
    }

    return 0;
}




