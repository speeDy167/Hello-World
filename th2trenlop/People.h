#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class People
{
private:
	char fullName[100];
	char ID[50];
public:
	int L;
	People() {
		L = -1;
	}
	virtual void Nhap();
	virtual void Xuat();
	void setname(string s)
	{
		for (int i = 0; i < 100; i++)
		{
			fullName[i] = s[i];
		}
	}
	string getName()
	{
		return fullName;
	}
	void setId(string s)
	{
		for (int i = 0; i < 50; i++)
		{
			ID[i] = s[i];
		}
	}
	string getId()
	{
		return ID;
	}

};

