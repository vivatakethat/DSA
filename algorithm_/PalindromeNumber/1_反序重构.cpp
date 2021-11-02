 
/*

回文数是指其各位数字左右堆成的整数，如121，676，94 249 等，寻找并输出11~999之间的数m,它满足m,m^2, m^3均为回文数


*/

#include<iostream>
using namespace std;

bool symm(long n);
int main()
{

	long m;

	for (m = 11; m < 1000; m++)
		if (symm(m) && symm(m*m) && symm(m*m*m))
			cout << "m= " << m <<  " m*m= " << m*m << " m*m*m= " << m*m*m << endl;

 
}	

bool symm(long n) {
    	if (n < 11)
		return 0; // 过滤到0-10 这些不可能的数:
	long i, m;
	i = n; m = 0;
	while (i)//m 反序重构的数
	{
		m = m * 10 + i % 10;   // i%10取个位   
		i = i / 10;  //   去掉右边一位
	}
	return (m == n);

}







