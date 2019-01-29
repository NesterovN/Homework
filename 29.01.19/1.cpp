/* */
#include <iostream>
using namespace std;
class double_vector
{
  private:
	double *d;
	unsigned int s;
	unsigned int c;

  public:
	double_vector()
	{
		d = new double[1];
		s = 0;
		c = 1;
		d[0] = 0;
	}
	double_vector(unsigned int n)
	{
		d = new double[n];
		s = 0;
		c = n;
		for (int i = 0; i < n; i++)
		{
			d[i] = 0;
		}
	}
	double_vector(double *a, unsigned int b)
	{
		delete[] d;
		d = a;
		s = b;
		c = b;
	}
	double_vector(const double_vector &a)
	{
		double *M = new double[a.c];
		for (int i = 0; i < a.c; i++)
		{
			M[i] = 0;
		}
		for (int i = 0; i < a.s; i++)
		{
			M[i] = a.d[i];
		}
		s = a.s;
		c = a.c;
		d = M;
		cout << " Copying Constructor is working ;";
	}
	const double_vector &operator=(const double_vector &a)
	{
		double *M = new double[a.c];
		for (int i = 0; i < a.c; i++)
		{
			M[i] = 0;
		}
		for (int i = 0; i < a.s; i++)
		{
			M[i] = a.d[i];
		}
		s = a.s;
		c = a.c;
		delete[] d;
		d = M;
		cout << " operator = is working ;";
		return *this;
	}
	void push_bak(int x)
	{
		if (s >= c)
		{
			c *= 2;
			double *temp = new double[c];
			for (int i = 0; i < c; i++)
			{
				temp[i] = 0;
			}
			for (int i = 0; i < s; i++)
			{
				temp[i] = d[i];
			}
			delete[] d;
			d = temp;
		}
		d[s] = x;
		s++;
		cout << " push_bak is working ;";
	}
	double pop_bak()
	{
		double a;
		a = d[s];
		d[s] = 0;
		s--;
		cout << " pop_bak is working ;";
		return a;
	}

	double operator[](unsigned int n)
	{
		cout << " operator [] is working ;";
		return d[n - 1];
	}
	void print(unsigned int n)
	{
		cout << d[n - 1];
		cout << " print is working ;";
	}
	void push_frnt(double x)
	{
		if (s >= c)
		{
			c *= 2;
			double *temp = new double[c];
			for (int i = 0; i < c; i++)
			{
				temp[i] = 0;
			}
			temp[0] = x;
			for (int i = 1; i <= s; i++)
			{
				temp[i] = d[i - 1];
			}
			delete[] d;
			d = temp;
		}
		for (int i = s; i > 0; i--)
		{
			d[i] = d[i - 1];
		}
		d[0] = x;
		s++;
		cout << " push_frnt is working ;";
	}
	double pop_frnt()
	{
		double a;
		a = d[0];
		for (int i = 0; i < s - 1; i++)
		{
			d[i] = d[i + 1];
		}
		s--;
		cout << " pop_frnt is working ;";
		return a;
	}
	~double_vector()
	{
		delete[] d;
		cout << " destructor is working ;";
	}
};
int main()
{
	double a = 10, b;
	unsigned int n = 10;
	double *j = new double[6];
	for (int i = 0; i < 6; i++)
	{
		j[i] = i;
	}
	double_vector p(n);
	double_vector g(j, 6);
	p.print(n - 3);
	a = p.pop_bak();
	g.print(1);
	for (int i = 0; i < 4; i++)
	{
		g.push_frnt(3);
	}
	g.print(n - 6);
	p = g;
	p.print(2);
	cout << " " << a;
	b = g.pop_frnt();
	cout << " " << b;
	return 0;
}
