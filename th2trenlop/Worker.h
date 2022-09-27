#pragma once
#include <iostream>
#include <string>
#include "People.h"
using namespace std;
class Worker : public People
{
private:
	int luong;
public:
	Worker()
	{
		L = 1;
		luong = 0;
	}

	Worker &operator=(Worker &s)
	{
		luong = s.getluong();
		setname(s.getName());
		setId(s.getId());
		return *this;
	}
	void Nhap();
	void Xuat();
	int getluong();
};
