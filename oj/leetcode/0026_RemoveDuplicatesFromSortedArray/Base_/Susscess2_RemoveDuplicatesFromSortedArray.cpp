


/*
take:这个网友提供的答案没有进行删除元素的操作,也能过?

执行用时 :
24 ms
, 在所有 cpp 提交中击败了
91.91%
的用户
内存消耗 :
9.8 MB
, 在所有 cpp 提交中击败了
94.24%
的用户
炫耀一下:


*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pre = 0, cur = 0, n = nums.size();
        while (cur < n) {
            if (nums[pre] == nums[cur]) ++cur;
            else nums[++pre] = nums[cur++];
        }
        return nums.empty() ? 0 : (pre + 1);
    }
};


int main()
{

  //  int a[]={0,0,1,2,2,3,4,5,6};
 vector<int> a={0,0,1,1,1,2,2,3,3,4};
Solution take;
int len=take.removeDuplicates(a);
for(int k=0;k<a.size();k++)
{
cout<<a[k]<<endl;


}
     
cout<<"len="<<len<<endl;
 
    return 0;
}



