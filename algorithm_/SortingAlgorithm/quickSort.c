/*
1. 从小到大排序：
从夏标i0（从0开始）开始为基准遍历一遍取得Min最小值然后与之替换
*/
#include<stdio.h>
void sortArray(int* nums, int numsSize)
{
 for(int i0=0;i0<numsSize;i0++)
 {
     int Min=nums[i0];
     int pos=i0;
for(int j1=i0;j1<numsSize;j1++) //j1<numsSize-1 不然下面 if对比会导致数组越界
{
  //  if(nums[j1]>nums[j1+1])
  if(Min>nums[j1])
    {

        Min=nums[j1];  
        pos=j1;    
    }
}

//printf("\n MIN=%d\n",Min);
int temp=nums[i0];
nums[i0]=Min;
nums[pos]=temp;
// for(int it=0;it<numsSize;it++)
// {
//     printf("[%d]  ",nums[it]);
// }
// printf("\n");
 }
}
int main()
{
int arr[9]={-1,0,1,2,-3,-4,12,33,-45};
sortArray(arr,9);
printf("\nresult-------->\n");
for(int it=0;it<8;it++)
{
    printf("[%d]  ",arr[it]);
}
printf("\n");
return 0;
}