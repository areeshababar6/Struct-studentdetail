#include "student.h"
#include <iostream>
using namespace std;

void main()
{
	student s[3];

	for (int i = 0; i < 3; i++)
	{
		cout << " Enter details of student " << i + 1 << endl;
		s[i].input();
	}
	cout << " Displaying details" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << " Student " << i + 1 << endl;
		s[i].print();
	}
}