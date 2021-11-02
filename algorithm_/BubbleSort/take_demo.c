


#include<stdio.h>
 


int main()
{


int a[]={3,4,56,1,2,400,44,6,8,45,6,7};
int len=sizeof(a)/sizeof (int);
//printf(" lne=%d",len);


for(int j=0;j<len-1;j++)
for(int i=0;i<len-1;i++)
{
    int t=0;
if(a[i]>a[i+1])
{
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
}


}

for(int j=0;j<len;j++)
printf(" a[%d]=%d ",j,a[j]);

printf("\n");
    return 0;
}



