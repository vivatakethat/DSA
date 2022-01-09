

// g++ std-sort6.cpp -o a.out -std=c++11
#include <iostream>
#include <algorithm>
#include <vector>

struct myclass
{
    myclass()
    {
        std::cout << __LINE__ << std::endl;
    }
    bool operator()(int a, int b)
    {
        std::cout << __LINE__ << std::endl;
        return a > b;
    } // 降序排列
} myobject;

int main()
{
    std::vector<int> v = {5, 4, 1, 7, 3, 8, 9, 10, 6, 2};
    // std::sort(v.begin(), v.end(), myobject);
    // std::cout << "sort vecotr by object (decreasing):" << std::endl;
    // for (int i : v)
    // {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    std::cout << myobject(3, 4) << std::endl;
    return 0;
}



