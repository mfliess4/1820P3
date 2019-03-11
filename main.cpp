/*	Project:    Implementing a relational join
	Name:       Michael Fliess
    Partner:    PARTNER'S NAME IF ANY
    Class:      CSC 1820 M/F Section
*/

#include <iostream>
#include <iomanip> //Use zybooks 9.3 for help
#include <map>
#include "customer.hpp"
#include "purchases.hpp"
#include "split.hpp"

using namespace std;

/*	A safe converter of text to float.

	Returns false if the string could not be converted.
*/

bool SafeFloatFromString(string & input, float & v)
{
	bool retval = true;
	v = 0;
	try {
		v = stof(input);
	}
	catch (const invalid_argument &) {
        	retval = false;
	}
	return retval;
}

//main start

int main(int argc, char *argv[])
{
	cout << "Hello, world." << endl;

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}