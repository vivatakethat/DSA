

#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str[] = {"5-1-9", "5-2-5", "5-2-4", "5-3-1", "8-1-5", "5-2-4", "9-3-2"};
    // string str[] = {"5-1-9", "5-2-5", "5-2-4", "5-3-1", "8-1-5"};
    size_t len = sizeof(str) / sizeof(str[0]);
    //cout<<"len:"<<len<<endl;

    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - 1; j++)
        {
            char *a = str[j].data();
            char *a2 = str[j + 1].data();
            if (a[0] < a2[0])
            {
                string temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                continue;
            }
            if (a[0] == a2[0])
            {

                if (a[2] < a2[2])
                {
                    string temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;
                    continue;
                }
                if (a[2] == a2[2])
                {
                    if (a[4] < a2[4])
                    {
                        string temp = str[j];
                        str[j] = str[j + 1];
                        str[j + 1] = temp;
                        continue; //
                    }
                }
            }
        }

    for (int i = 0; i < len; i++)
        cout << "i:" << i << " " << str[i] << endl;

    return 0;
}





