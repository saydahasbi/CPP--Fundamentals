#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;

	cout << fixed << setprecision(1);

		//input 
		cout << "enter integer number a: ";
	cin >> a;
	cout << "enter integer number b: ";
	cin >> b;

	// calculate
	cout << "a > b = " << (a > b) << endl;
	cout << "a == b = " << (a == b) << endl;
	cout << "(a > b) && (b > 0) = " << ((a > b) && (b > 0)) << endl;

	return 0;
}