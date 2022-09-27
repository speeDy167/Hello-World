#include "Student.h"
void Student::Nhap()
{
	People::Nhap();
	cout << "MSSV: ";
	cin >> IDS;

}

void Student::Xuat()
{
	People::Xuat();
	cout <<"MSSV: "<< IDS << endl;
}