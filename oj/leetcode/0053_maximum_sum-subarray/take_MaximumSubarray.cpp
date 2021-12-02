/*

卡登算法


[53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

53. Maximum Subarray
 Example:
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

*/

#include<iostream>
#include<climits> 
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

       int len=nums.size();
       int max_so_far=INT_MIN,max_end=0;//take:mark
       for(int i=0;i<len;i++)
       {

           max_end=max_end+nums[i];
           if(max_so_far<max_end)
           max_so_far=max_end;
           
           if(max_end<0)
           max_end=0;

       }

return max_so_far;



        
    }
};


int main()
{


    vector<int> a={-10,-2,-4};
    Solution take;

    cout<<take.maxSubArray(a);

   // cout<<INT_MIN<<endl;

    return 0;
}





/*



 
Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_ending_here < 0)
            max_ending_here = 0
  (c) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far



理解此算法的关键在于:

1. 最大子片段中不可能包含求和值为负的前缀。 例如 【-2， 1，4】 必然不能是最大子数列， 因为去掉值为负的前缀后【-2，1】， 可以得到一个更大的子数列 【4】、
2. 所以在遍历过程中，每当累加结果成为一个非正值时， 就应当将下一个元素作为潜在最大子数列的起始元素， 重新开始累加。
3. 由于在累加过程中， 出现过的最大值都会被记录， 且每一个可能成为 最大子数列起始元素 的位置， 都会导致新一轮的累加， 这样就保证了答案搜索过程的完备性和正确性。





//  https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

//  https://cloud.tencent.com/developer/article/1403056




*/








