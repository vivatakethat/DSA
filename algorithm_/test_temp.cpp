
/*


https://www.luogu.com.cn/problem/P5745





*/

#include<iostream>


using namespace std;
 int a[10000150]; //全局变量反而不会崩溃，不仅仅是 全局变量初始化的原因

int main()
{

// int a[10000150];  //放在这里会导致程序崩溃！收到  SIGSEGV为什么？
    int n,M;
    int ansmax=0,ansi,ansj;
    cin>>n>>M;
    for(int i=1;i<=n;i++)cin>>a[i];
    
    for(int i=1;i<=n;i++)
    for(int j=i;j<=n;j++)
    {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
            
                      sum+=a[k];
                 //   cout<<sum<<"+= a["<<k<<"]"<<endl;
               //     cout<<endl<<"---------------"<<endl;
                   
            }
            if(sum<=M&&sum>ansmax)
            ansmax=sum,ansi=i,ansj=j;

    }

    cout<<ansi<<' '<<ansj<<' '<<ansmax<<endl;
return 0;


}
















