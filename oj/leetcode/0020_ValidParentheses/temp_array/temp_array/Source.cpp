
/*
https://leetcode.com/problems/container-with-most-water/


Start by evaluating the widest container, using the first and the last line. All other possible containers are less wide, so to hold more water, they need to be higher. Thus, after evaluating that widest container, skip lines at both ends that don't support a higher height. Then evaluate that new container we arrived at. Repeat until there are no more possible containers left.


*/
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

//using std::vector;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int water = 0;
		int i = 0, j = height.size() - 1;
		while (i < j) {
			int h = min(height[i], height[j]);
			water = max(water, (j - i) * h);
			while (height[i] <= h && i < j) i++;  //takethat:确保宽度最大的情况下,找比h还要大的
			while (height[j] <= h && i < j) j--;
		}
		return water;
	}

	

		 

	 
};

int main()
{
	
	vector<int >a = { 1,4,6,5,2 };
	Solution take;
	cout<<take.maxArea(a);



 
	return 0;

}


/*
官网给出的答案
https://leetcode.com/problems/container-with-most-water/solution/




*/


