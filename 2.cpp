#include<iostream>
using namespace std;
double f(double x)
{
	return (x * x - 5* x + 4);//函数部分f(x),可自行修改函数表达式；
}
void dish(double* p1, double* p2, double* p3)//p1,p2为区间,p3为方程的解
{
	if (f(*p1) * f(*p2) <= 0)
	{
		*p3 = (*p1 + *p2) / 2;
		while ((f(*p3) < -1e-6) || (f(*p3) > 1e-6))
		{
			*p3 = (*p1 + *p2) / 2;
			if (f(*p1) * f(*p3) > 0)
				*p1 = *p3;
			else
				*p2 = *p3;
		}
		double m = 0;
		if (*p1 > * p2)
		{
			m = *p1;
			*p1 = *p2;
			*p2 = m;
		}
		cout<<"f(x)=0在区间上有一解"<< *p3<<endl;
	}
	else
		cout << "无法确定" << endl;
}
int main()
{
	double a, b, c;//a,b为范围,c为实数解
	cout << "请输入x1和x2的区间" << endl;
	cin >> a >> b;
	c = (a + b) / 2;
	double *p1 = &a;
	double *p2 = &b;
	double* p3 = &c;
	dish(p1, p2, p3);
	return 0;
}