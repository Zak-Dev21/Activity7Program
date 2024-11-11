#include <iostream>
#include <string>
using namespace std;

int main()
{
    // store variables that we later be used for inputs
    string first_name;
    string second_name;
    string third_name;
    string names[4];

    // Using getline to take full names as input
    cout << "Give me one name of your choice: " << endl;
    getline(cin, first_name);  // Read a full line

    cout << "Give me another name of your choice: " << endl;
    getline(cin, second_name); // Read a full line

    cout << "Give me one last name of your choice: " << endl;
    getline(cin, third_name);  // Read a full line

    // storing inputs in the names array
    names[0] = first_name;
    names[1] = second_name;
    names[2] = third_name;

    cout << endl << "First name you gave is: " << names[0] << endl;

    return 0;
}

