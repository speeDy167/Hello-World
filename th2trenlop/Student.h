#pragma once
#include <iostream>
#include <string.h>
#include "People.h"
using namespace std;
class Student : public People
{
private:
	int IDS;
public:
	Student() {
		L = 0;
	}
	void Nhap();
	void Xuat();
};

