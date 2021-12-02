// C++ program to print largest contiguous array sum 
#include<iostream> 
#include<climits> 
using namespace std; 

int maxSubArraySum(int a[], int size) 
{ 
	int max_so_far = INT_MIN, max_ending_here = 0; 

	for (int i = 0; i < size; i++) 
	{ 
		max_ending_here = max_ending_here + a[i]; 
		if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 

		if (max_ending_here < 0) 
			max_ending_here = 0; 
	} 

	return max_so_far; 
} 

/*Driver program to test maxSubArraySum*/
int main() 
{ 
 	int a[] = {-2, -3, -4, -1, -2, -1, -5, -3};  

//  -2,1,-3,4,-1,2,1,-5,4
    //int a[] = {-2,1,-3,4,-1,2,1,-5,4};

	int n = sizeof(a)/sizeof(a[0]); 
	int max_sum = maxSubArraySum(a, n); 
	cout << "Maximum contiguous sum is " << max_sum; 
	return 0; 
} 




/*



Initialize:
    max_so_far = 0
    max_ending_here = 0

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



*/