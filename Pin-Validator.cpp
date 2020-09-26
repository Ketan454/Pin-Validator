#include <iostream>
using namespace std;
int main() {
	int pass=1234;
	int pin;
	int chances;
	cout << "Welcome to State Bank Of India.\n";
	cout << "Enter Your Pin: ";
	cin >> pin;
	while(pin != pass) {
		if(pin != pass) {
			cout << "Try Your Pin Again: ";
			cin >> pin;
		}
	}
	if(pin == pass) {
		cout << "Welcome.\n";
		cout << "\n";
	}
	cout << "Press Enter To Exit: ";
	cin.get();
	cin.get();
	return 0;
}
