// Lab_02.cpp
// ������ �����
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // ����� �
	double x; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	double a; // �����
	cout << "x = "; cin >> x;
	cout << " a = "; cin >> a;
	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * (sin(2 * a) * sin(2 * a)));
	z2 = 2 * sin(a);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
