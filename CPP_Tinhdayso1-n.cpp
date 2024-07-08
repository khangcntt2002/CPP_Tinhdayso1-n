// CPP_Tinhdayso1-n.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
 
int sum(int n) {
	if (n == 1) {
		return 1;

	}
	else {
		return sum(n - 1) + n; 

	}
}
int main() {
	int n;

		cout << "Nhap N: ";
		cin >> n;
		cout << "Tong cua day so la: " << sum(n) << endl;
	
}

	




 