#include "student.h"
#include <iostream>
using namespace std;

void student::input()
{
	cout << " Enter first name: ";
	cin >> Fname;
	cout << " Enter last name: ";
	cin.ignore();
	cin >> Lname;
	cin.ignore();

	cout << " Enter address: ";
	cin.get(address, 50);
	cout << " Enter roll number: ";
	cin.ignore();
	cin.get(rollNo, 14);
}
void student::print()
{
	cout << " ------------------------" << endl;
	cout << " First name: " << Fname << endl;
	cout << " Last name: " << Lname << endl;
	cout << " Address: " << address << endl;
	cout << " Roll no: " << rollNo << endl;
}