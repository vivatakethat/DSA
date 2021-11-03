

#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
#include <memory.h>
/*

 题目1：从小到大排列下面一堆数字，3,1,6,2,9,0,2,3,9,3,9 ..并且打印他们重复的次数(先不要急着看答案，自己想一下，能想出更好的做法^_^)

数组中计算某个元素出现次数的问题  -->   https://juejin.cn/post/6844903893235662855


资料:
1. Count how many times elements in an array are repeated->  https://stackoverflow.com/questions/34820275/count-how-many-times-elements-in-an-array-are-repeated/34820352



*/

std::map<int, unsigned int> counter(const std::vector<int> &vals);

void display(const std::map<int, unsigned int> &counts);

int main()
{
    //CArray repeatArray;
  
    int a[] = {3, 1, 6, 2, 9, 0, 2, 3, 9, 3, 9};

    int len = sizeof(a) / sizeof(int);
    //printf(" lne=%d",len);

    for (int j = 0; j < len - 1; j++)
        for (int i = 0; i < len - 1; i++)
        {
            int t = 0;
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    //----< eof sort
    std::vector<int> veca(a, a + len);

    display(counter(veca));

    // for (int j = 0; j < len; j++)
    //     printf(" b[%d]=%d ", j, a[j]);

    // printf("\n");

    return 0;
}

std::map<int, unsigned int> counter(const std::vector<int> &vals)
{
    std::map<int, unsigned int> rv;

    for (auto val = vals.begin(); val != vals.end(); ++val)
    {
        rv[*val]++;
    }

    return rv;
}

void display(const std::map<int, unsigned int> &counts)
{
    for (auto count = counts.begin(); count != counts.end(); ++count)
    {
        std::cout << "Value " << count->first << " has count "
                  << count->second << std::endl;
    }
}





