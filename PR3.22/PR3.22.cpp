#include <iostream>
using namespace std;
int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (x < 0 && b != 0)
		F = a * (x * x) + b;
	if (x > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = x / c;

	cout << endl;
	cout << "1) F = " << F << endl;

	if (x < 0 && b != 0)
		F = a * (x * x) + b;
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = x / c;

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}