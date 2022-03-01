#include <iostream>
#include <string>

using namespace std;

int main()
{
	string full_name, nickname, address;
	string greeting("Hello, ");

	cout << "Enter your name: ";
	getline(cin, full_name);
	cout << "Your name: " << full_name << endl;

	cout << "Enter your alias: ";
	cin >> nickname;

	greeting += nickname;
	cout << greeting << endl;

	cout << "Enter your address on several lines\n";
	cout << "End of character input '$'\n";
	getline(cin, address, '$');
	cout << "Your address: " << address << endl;

	system("pause");
	return 0;
}