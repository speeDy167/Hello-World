#pragma once
#include<iostream>
using namespace std;
class HinhVe
{
private:
	int h;
public:
	HinhVe() {
		h = 1;
	}

	void Nhap() {
		cout << "Nhap h: ";
		cin >> h;
	}

	int mainnumber() {
		return 2 * h - 1;
	}

	void intren(int i) {
		for (int t = 1; t <= i; t++) {
			cout << "	*";
		}

		for (int t = 1; t <=mainnumber() - 2*i; t++) {
			cout << "	";
		}

		for (int t = 1; t <= i; t++) {
			cout << "	*";
		}
	}

	void induoi(int i) {
		for (int t = 1; t <= mainnumber()-i; t++) {
			cout << "	*";
		}

		for (int t = 1; t <= (2 * i)-mainnumber(); t++) {
			cout << "	";
		}
	
		for (int t = 1; t <= mainnumber() - i; t++) {
			cout << "	*";
		}
	}

	void caua() {
		for (int i = 1; i <= (mainnumber()/2); i++) {
			intren(i);
			cout << endl;
		}

		for (int i = 1; i <= mainnumber(); i++) {
			cout << "	*";
		}
		cout << endl;

		for (int i = 1 + (mainnumber() / 2); i <= mainnumber(); i++) {
			induoi(i);
			cout << endl;
		}
	}

	void intrencaub(int i) {
		for (int t = 1; t < i; t++) cout << "	";
		cout << "	*";
		for (int t = 1; t <= mainnumber() - 2 * i; t++)
			cout <<"	";
		cout << "	*";

	}

	void induoicaub(int i) {
		for (int t = 1; t < i; t++) cout << "	";
		cout << "	*";
		for (int t = 1; t <= mainnumber() - 2 * i; t++)
			cout << "	";
		cout << "	*";
	}
	void caub() {
		//velangtren
		for (int i = 1; i <= mainnumber(); i++) cout << "	*";
		cout << endl;
		for (int i = 2; i <= mainnumber()/2; i++) {
			intrencaub(i);
			cout << endl;
		}

		//ingiua
		for (int i = 0; i <= mainnumber()/2-1; i++) cout << "	";
		cout << "	*" << endl;

		//induoi
		for (int i = mainnumber()/2; i >=2; i--) {
			induoicaub(i);
			cout << endl;
		}
		for (int i = 1; i <= mainnumber(); i++) cout << "	*";
		cout << endl;

	}

	void cauc() {
		for (int i = 0; i < mainnumber() / 2 + 2; i++) {
			int t = i;
			for (int j = 0; j < i; j++) {
				cout << "	" << t++;
			}
			cout << endl;
		}

		for (int i = mainnumber() / 2; i > 0; i--) {
			int t = mainnumber() - i + 1;
			for (int j = i; j > 0; j--) {
				cout << "	" << t++;
			}
			cout << endl;
		}
	}

		int mainnum2(){
			return mainnumber() * 2 - 1;
		}
};

