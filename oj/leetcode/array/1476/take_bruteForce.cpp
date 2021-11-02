

#include <iostream>
#include <vector>
using namespace std;

class SubrectangleQueries
{
public:
    vector<vector<int>> rectangle;
    SubrectangleQueries(vector<vector<int>> &recTangle)
    {
        rectangle = recTangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        int r = row1, c = col1;

        for (int i = row1; i <= row2; i++) //rows
        {
            for (int j = col1; j <= col2; j++)
            {
                rectangle[i][j] = newValue;
            }
        }
    }

    int getValue(int row, int col)
    {

        return rectangle[row][col];
    }
};

int main()
{

    vector<vector<int>> data = {{1, 2, 1}, {4, 3, 4}, {3, 2, 1}, {1, 1, 1}};
    SubrectangleQueries take(data);

    for (int i = 0; i < take.rectangle.size(); i++)
    {
        for (int j = 0; j < take.rectangle[i].size(); j++)
            printf("%d ", take.rectangle[i][j]);

        printf("\n");
    }
    printf("\ngetvalue:%d\n", take.getValue(0, 2));

    take.updateSubrectangle(0, 0, 1, 2, 5);

    for (int i = 0; i < take.rectangle.size(); i++)
    {
        for (int j = 0; j < take.rectangle[i].size(); j++)
            printf("%d ", take.rectangle[i][j]);

        printf("\n");
    }

    return 0;
}

