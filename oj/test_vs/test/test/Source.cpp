#include<iostream>
#include<stdio.h>

using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

// A utility funtion to find maximum of three integers 
int max(int a, int b, int c) { return max(max(a, b), c); }


int a(int a)
{

	cout <<"line="<< __LINE__ << endl;
	return a;
}

int b(int b)
{
	cout << "line="<<__LINE__ << endl;
	return b;

}

int c(int c)
{

	cout << "line=" << __LINE__ << endl;

	return max(a(1), b(2), 3);
}

int main()
{
	cout << "line=" << c(3) << endl;;
 
	return 0;
}
