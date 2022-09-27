#include "Worker.h"
void Worker::Nhap()
{
	People::Nhap();
	cout << "Luong: ";
	cin >> luong;

}

void Worker::Xuat()
{
	People::Xuat();
	cout <<"Luong: "<< luong << endl;
}
int Worker::getluong()
{
	return luong;
}