// ����������� ������ � 5.2
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);
int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "arctg(x)" << " |"
		<< setw(10) << "PI/2 + S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		S(x, eps, n, s);
		const double PI = 4 * atan(1);// 3.141592653589793;
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(x) << " |"
			<< setw(10) << setprecision(5) << PI/2 + s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
void S(const double x, const double eps, int& n, double& s)
{
	n = 0; // ����� �������� �� ����� �������� �������
	double a = -1./x; // ����� �������� �� ����� �������� �������
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
}
void A(const double x, const int n, double& a)
{
	double R = ((-1) / (x * x)) * ((2 * n - 1) / (2 * n + 1)); // ����� �������� �� ����� �������� �������
	a *= R;
}