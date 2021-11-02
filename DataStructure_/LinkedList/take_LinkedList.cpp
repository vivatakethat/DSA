

/*


单链表逆序:
https://blog.csdn.net/autumn20080101/article/details/7607148




*/

#include<assert.h>


#include<iostream>
using namespace std;


template<typename T>
 struct Node
{
T data;
Node * next=nullptr;

};
 


template<typename T>
class take_LinkedList
{
private:
        size_t m_pos;
        size_t m_size;
       Node<T>*    m_head;
 
    /* data */
public:
    take_LinkedList(/* args */);
   void push_back(T value);
   void show();
void insert(int pos,T value);
void addToTail(T value);
void reversePrint();
void delAll();
    ~take_LinkedList();
};




template<typename T>
take_LinkedList<T>::take_LinkedList(/* args */):m_pos(0),m_size(0),m_head(nullptr)
{


}
 
template<typename T>
void take_LinkedList<T>::delAll()
{

Node<T> * ptr=m_head;
int a=0;
while(m_head->next!=nullptr)
{
    ptr=m_head->next;
    delete m_head;
    m_head=ptr;

   
 //   show();
    a++;
  //  cout<<"dele "<<a<<" conts"<<endl;


}
   delete m_head;
   delete ptr;

 
}
 
template<typename T>
  take_LinkedList<T>::~take_LinkedList()
{

Node<T> * ptr=m_head;
while(m_head->next!=nullptr)
{
    ptr=m_head->next;
    delete m_head;
    m_head=ptr;


}
   delete m_head;


 
}


template<typename T>
void take_LinkedList<T>::push_back(T value)
{
      if(m_size==0)     
      {
     
m_head=new Node<T>();
m_head->data=value;
m_head->next=nullptr;
m_size++;
      
      }
      else
      {
   
  
      


        Node<T> *ptrCurrNode=m_head;
    while(ptrCurrNode->next!=nullptr)
    {
          ptrCurrNode=ptrCurrNode->next;


    }

ptrCurrNode->next=new Node<T>();
ptrCurrNode=ptrCurrNode->next;
ptrCurrNode->data=value;
ptrCurrNode->next=nullptr;
     m_size++;

    
 
    }
}

template<typename T>
void take_LinkedList<T>::show()
{
 if(m_head==nullptr)
  return ;
  Node<T> * p=m_head;
   while(p->next!=nullptr)
    {
 
      cout<<p->data<<endl;
 
       p=p->next;


    }
     cout<<p->data<<endl;
   

}


template<typename T>
void take_LinkedList<T>::insert(int pos,T value)
{

    assert(pos>=0&&pos<=(m_size-1));


   Node<T>* ptrCurrNode=m_head; 
    
   Node<T>* ptrPosNextNode=m_head; 

    for(int i=0;i<pos-1;i++)
    {
    ptrCurrNode=ptrCurrNode->next;
    }

ptrPosNextNode=ptrCurrNode->next;


 Node<T>* new_data=new Node<T>();
  new_data->data=value;
  if(pos==0)
  {
        new_data->next=ptrCurrNode;
        m_head=new_data;

  }
    else
    {
    
   
ptrCurrNode->next=new_data;
new_data->next=ptrPosNextNode;
  }
m_size++;

}

template<typename T>
void take_LinkedList<T>::addToTail(T value)
{
        Node<T>* t_head=m_head;
        Node<T> * newnode=new Node<T>;
        newnode->data=value;

        newnode->next=t_head;
        m_head=newnode;
        m_size++;

      

}


template<typename T>
void take_LinkedList<T>::reversePrint()
{


    Node<int> * ptr_null=nullptr;
    Node<int>* pre=ptr_null;
  
    Node<int>* ptr_next=m_head->next;


    
   
    while(ptr_next!=nullptr)
    {
         m_head->next=pre;
         pre=m_head;

      m_head=ptr_next;

      ptr_next=ptr_next->next;
     
         
  
     }

     if(m_head->next==nullptr)
     m_head->next=pre;
 
   //  this->show();
 
}






 
 

 



 
int main()
{
take_LinkedList<int> test;
 test.push_back(0);
  test.push_back(1);
  test.insert(0,44);
   test.push_back(2);
  test.push_back(3);
  test.push_back(4);
 test.insert(5,22);
 test.push_back(31);
  test.addToTail(99);

 test.show();

cout<<endl<<"--------------"<<endl;

test.reversePrint();
cout<<endl<<"--------------"<<endl;
test.reversePrint();
test.show();
cout<<endl<<"~~~~~~~~~~~~~~~~~~"<<endl;
test.delAll();

 
   
return 0;
}















