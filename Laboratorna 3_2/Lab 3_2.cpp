// Lab 3_2.cpp
// �������� ������
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 20


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "x = "; cin >> x; cout << endl;
	cout << "a = "; cin >> a; cout << endl;
	cout << "b = "; cin >> b; cout << endl;
	cout << "c = "; cin >> c; cout << endl;

// ������������ � ��������� ����

	if (x < 0 && b != 0)
		F = -((2*x - c) / (c*x - a));
	if (x > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = -x / c + (-c / 2*x);
	cout << "F = " << F<<endl;
// ������������ � ����� ����
	if (x < 0 && b != 0)
		F = -((2 * x - c) / (c * x - a));
	else 
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
				F = -x / c + (-c / 2 * x);
	cout << "F = " << F << endl;

	system("pause");
	return 0;

}