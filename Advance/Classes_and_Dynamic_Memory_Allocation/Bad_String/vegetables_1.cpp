#include <iostream>
#include "string.h"

using std::cout;

void callme1 (String &);	//pass by reference
void callme2 (String );		//pass by value

int main()
{
	using std::endl;

	cout << "Starting an inner block\n";

	String headline0 ("Celey Stalks at Midnight");
	String headline1 ("Lettuce prey");
	String sports("Spinach leaves Bowl for Dollars");

	cout << "headline0: " << headline0 << endl;
	cout << "headline1: " << headline1 << endl;
	cout << "Sport: " << sports << endl;

	callme1(headline0);

	cout << "headline0: " << headline0 << endl;

	callme2(headline1);

	cout << "headline1: " << headline1 << endl;

	cout << "intialialize one object to another:\n";
	String sailor = sports;
	cout << "Assign one object to another: \n";

	String knot;
	knot = headline0;

	cout << "knot: " << knot << endl;
	cout << "Exiting the block.\n";
	cout << "End of main().\n";
	
	return 0;
}


void callme1(String & rsb)
{
	cout << "String passed by reference: \n";
	cout << " \"" << rsb << "\"\n";
}

void callme2(String sb)
{
	cout << "String passed by value: \n";
	cout << " \"" << sb << "\"\n";
}
