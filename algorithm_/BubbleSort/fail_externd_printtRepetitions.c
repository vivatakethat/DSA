

/*




题目1：从小到大排列下面一堆数字，3,1,6,2,9,0,2,3,9,3,9 ..并且打印他们重复的次数(先不要急着看答案，自己想一下，能想出更好的做法^_^)

takethat:
2021-10-20: 排序跟 统计重复次数 要分开做不能一起做!但我不知道具体怎么做!



*/

int main()
{

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
    //
    int b[len];

    for (int j = 0; j < len; j = j + b[j])
    {
        int t = 0;
        for (int i = 0; i < len; i++)
        {

            if (a[i] == a[i + 1])
            {
                //    printf("line:%d  b[%d]=%d\n",__LINE__,j,t);
                t++;
            }
        }
        b[j] = t;
    }

    for (int j = 0; j < len; j++)
        printf(" b[%d]=%d ", j, b[j]);

    printf("\n");

    return 0;
}
