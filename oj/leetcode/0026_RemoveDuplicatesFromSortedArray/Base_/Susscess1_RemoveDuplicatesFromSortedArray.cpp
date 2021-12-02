
 

 /*
Success
Details 
Runtime: 240 ms, faster than 5.44% of C++ online submissions for Remove Duplicates from Sorted Array.

Runtime: 240 ms, faster than 5.44% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 9.9 MB, less than 93.75% of C++ online submissions for Remove Duplicates from Sorted Array.
 */


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.size()<1)
         {
                return 0;

         }
       
     
        int i=0,j=1;
        for(;j<nums.size();)
        {
                nu_mark=nums[i];
                if(nu_mark==nums[j])
                {
                   std::vector<int>::iterator iter=std::find(nums.begin(),nums.end(),nu_mark);
                    nums.erase(iter);//这里i容器size会缩小
                    continue;

                }
                else
                {
                    i++,j++;
                    continue;
                }
                

        }
                return nums.size();
        
    }
    private:
    int nu_mark;

};




int main()
{
  //  int a[]={0,0,1,2,2,3,4,5,6};
 vector<int> a={0,0,1,1,1,2,2,3,3,4};
Solution take;
take.removeDuplicates(a);
for(int i=0;i<a.size();i++)
cout<<a[i]<<endl;

    return 0;

 
}

