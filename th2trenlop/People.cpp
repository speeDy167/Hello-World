#include "People.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void People::Nhap()
{
	cout << "Ho va ten: ";
	cin.ignore();
	gets_s(fullName);
	fflush(stdin);
	cout << "CMND: ";	
	cin >> ID;
}

void People::Xuat()
{
	cout <<"Ho va ten: "<< fullName << endl;
	cout <<"CMND: "<< ID << endl;
}

