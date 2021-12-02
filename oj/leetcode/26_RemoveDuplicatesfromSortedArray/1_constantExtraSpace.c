/*
Method 2: (Constant extra space)
Just maintain a separate index for same array as maintained for different array in Method 1.
*/
int removeDuplicates(int arr[],int n)
{
if (n==0||n==1)
        return n;
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if (arr[i]!=arr[i+1])
        arr[j++]=arr[i];
    }
arr[j++]=arr[n-1];   
printf("\nj=%d\n",j);
return j;
 }
 int main()
{
int arr[]={1,1,2};
int len=removeDuplicates(arr,3);
for(int i=0;i<len;i++)
printf("a[%d]=%d\t",i,arr[i]);
    return 0;
}
