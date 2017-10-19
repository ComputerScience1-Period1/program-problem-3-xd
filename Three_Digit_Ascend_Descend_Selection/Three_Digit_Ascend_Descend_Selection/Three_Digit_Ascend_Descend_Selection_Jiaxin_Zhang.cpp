/*
Jiaxin Zhang-Period:1
Assignment Name : Three Digit Ascend Descend Selection
Classify a number based on digits
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN xddddddddddddddddddddddd 🅱
void main() {
	int x;
	cout << "Input a 3 digit number." << endl;
	cin >> x;
	int A = x/100;
	int B = (x-A*100)/10;
	int C = (x-A*100-B*10);
	if (A < B && B < C) {
		cout << "descending" << endl;
	}
	else if (A > B && B > C) {
		cout << "ascending" << endl;
	}
	else {
		cout << "neither" << endl;
	};


	pause(); // pauses to see the displayed text
}
