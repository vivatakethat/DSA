

#include <stdio.h>
#include <memory.h>

/*

 题目1：从小到大排列下面一堆数字，3,1,6,2,9,0,2,3,9,3,9 ..并且打印他们重复的次数(先不要急着看答案，自己想一下，能想出更好的做法^_^)

数组中计算某个元素出现次数的问题  -->   https://juejin.cn/post/6844903893235662855


资料:
1. Count how many times elements in an array are repeated->  https://stackoverflow.com/questions/34820275/count-how-many-times-elements-in-an-array-are-repeated/34820352



*/

int main()
{

    int a[] = {3, 1, 6, 2, 9, 0, 2, 3, 9, 3, 9};

    int len = sizeof(a) / sizeof(int);

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
    int rt[100];

    memset(rt, -1, sizeof(rt));
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        if (rt[a[i]] == -1)
            rt[a[i]] = 0;
        rt[a[i]]++;
    }

    for (int j = 0; j < sizeof(rt) / sizeof(int); j++)
        if (rt[j] > -1)
            printf(" %d repeat> %d \n", j, rt[j]);

    printf("\n");

    return 0;
}
