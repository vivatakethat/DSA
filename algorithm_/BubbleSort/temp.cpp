#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int array[12]={1,1,1,1,4,6,4,7,4,0,0};
int a[100];
memset(a,0,sizeof(a));
for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
{
    a[array[i]]++;
}
for(int i=1; i<sizeof(a)/sizeof(a[0]); i++)
{
    if(a[i]>0)
    {
        cout<<"The number "<<i<<"is repeated "<<a[i]<<" times"<<"\n";
    }

}

}



