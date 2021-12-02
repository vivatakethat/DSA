

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        
        int n = ratings.size();
        if(n<2)
        return n;
        vector<int> candyArray(n, 1);
        for (int i = 0; i < n - 1; i++)
        {
            if (ratings[i] < ratings[i + 1])
            {

                candyArray[i + 1] = candyArray[i] + 1;
            }
        }

        for (int i = n-1; i >= 1; --i)
        {
            if (ratings[i - 1] > ratings[i] && candyArray[i - 1] <= candyArray[i])
            {
                candyArray[i - 1] = candyArray[i] + 1;
            }
        }

        int sum = accumulate(candyArray.begin(), candyArray.end(), 0);
        return sum;
    }
};

int main()
{
    vector<int> rat = {1, 0, 2};
    Solution take;
    cout << take.candy(rat);

    return 0;
}
