#pragma once
#include "Student.h"
#include "Worker.h"
class List: public Worker, public Student
{
private:
	int n;
	People** arr;
public:
	void Nhap()
	{
		cout << "--------NHAP DANH SACH SINH VIEN VA CONG NHAN--------" << endl << endl;
		cout << "Tong so nguoi trong danh sach: ";
		cin >> n;
		arr = new People*[n];
		int flag;
		
		for (int i = 0; i < n; i++)
		{
			cout << "STT: " << i + 1 << endl;
			cout << "0. Student-----1.Worker" << endl;
			cin >> flag;
			switch (flag)
			{
			case 0:
			{
				arr[i] = new Student();
				arr[i]->Nhap();
				break;
			}

			case 1:
			{
				arr[i] = new Worker();
				arr[i]->Nhap();
				break;
			}
			}
			cout << endl;
		}
	}

	void Xuat()
	{
		cout << "________DANH SACH SINH VIEN, CONG NHAN________" << endl << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "STT: " << i + 1 << endl;
			switch (arr[i]->L)
			{
			case 0: 
			{
				arr[i]->Xuat();
				break;
			}
			case 1:
			{
				arr[i]->Xuat();
				break;
			}
			}
			cout << endl;
		}
		
	}

	Worker highest();
};

