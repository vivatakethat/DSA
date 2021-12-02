#include<iostream>
#include<stdio.h>
#include<map>
#include<string>

using namespace std;

class Solution{
    public:

    bool isValid(string str_)
    {


int len=str_.size();
        stack=new char[len];


        const string str=str_;
                    if(str.size()%2!=0)
                    return false;

                    for(int i=0;i<str.size();i++)
                    {
                                if(TOP==-1)
                                push(str[i]);
                                else {
                                    if(stack[TOP]!=Smap[str[i]])
                                         push(str[i]);
                                            else 
                                                  pop();
                                          
                                }

                    }

                    if(isEmpty())
                    return true;
                    else return false;
                    return true;  //防止报错


    }
 
std::map<char,char > Smap={{')','('},{']','['},{'}','{'} };//这里注意:key-value别写反了
     

void push(char element)
{
    TOP++;
    stack[TOP]=element;
}

bool pop()
{
    if (TOP==-1)
    return false;
    stack[TOP]=0;
    TOP--;
    return true;
}

bool isEmpty()
{
    if(TOP==-1)
    return true;
    else return false;
    
}


private:
  char *stack;
     int TOP=-1;


};



int main()
{
    string ex="()";
    Solution take;
    take.isValid(ex);


    return 0;
}