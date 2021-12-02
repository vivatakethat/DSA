// count algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>       // std::vector
#include<map>
using namespace std;

 

int main () {



 map<char, char> sMap = {{')', '('},
                                {'}', '{'},
                                {']', '['}};


// std::map<char,char>::iterator it=sMap.begin();
// while(it!=sMap.end())
// {
//     cout<<it->first<<"::"<<it->second<<endl;
//     it++;
// }
int len=sMap.size();
cout<<"len:"<<len<<endl;
for(int i=0;i<sMap.size();i++)
{
  cout<<"sMap():"<<sMap.size()<<" i="<<i<<endl;   //为何sMap.size()会增长

  cout<<sMap[i]<<endl;
}


 


 
  return 0;
}
 