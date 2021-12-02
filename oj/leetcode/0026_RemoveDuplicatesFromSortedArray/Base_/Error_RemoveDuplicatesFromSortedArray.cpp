
/*

Wrong Answer
 

input:  [0,0,1,1,1,2,2,3,3,4]
 
 OutPut: [0,1,1,2,3,4]

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
                return -1;

         }
       
     
        int i=0,j=1;
        for(;j<nums.size();i++,j++)
        {
                nu_mark=nums[i];
                if(nu_mark==nums[j])
                {
                   std::vector<int>::iterator iter=std::find(nums.begin(),nums.end(),nu_mark);
                    nums.erase(iter);//在这里动态容器删除一个元素,导致 i ,j自动偏移下一个

                }
                else
                {
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

