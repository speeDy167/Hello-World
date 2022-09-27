#include <iostream>
#include "List.h"
#include "People.h"
using namespace std;

int main() {
	List a;
	a.Nhap();
	a.Xuat();
	a.highest().Xuat();
	return 0;
}