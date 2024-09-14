
#include <iostream>
using namespace std;

int main()
{
	// store variables that we later be used for inputs
	string first_name;
	string second_name;
	string third_name;
	string names[4];

	cout << "Give me one name of your choice: " << endl; // ask user to input data
	cin >> first_name;

	cout << "Give me annother name of your choice: " << endl; // ask user to input data
	cin >> second_name;

	cout << "Give me one last name of your choice: " << endl; // ask user to input data
	cin >> third_name;

	names[0] = first_name;
	names[1] = second_name;
	names[2] = third_name;

	cout << endl << names[0];




}
