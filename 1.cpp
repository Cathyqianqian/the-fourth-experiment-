#include<iostream>
using namespace std;
int Fs(int n)
{
	while (n >= 0)
	{
		if (n == 0)
			return 0;
		else if (n == 1)
			return 1;
		else return Fs(n - 2) + Fs(n - 1);
	}
	if (n < 0)
		cout << "ERROR" << endl;
}
int main()
{
	int N, n;
	cout << "请输入要求的斐波那契数列项数" << endl;
	cin >> N;
	int* p = new int[N];
	n = 0;
	while (n < N)
	{
		p[n] = Fs(n);
		cout << p[n] << " ";
		n++;
	}
}