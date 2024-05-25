#include <iostream>
#include "header.h"

int main()
{
	using std::cout;
	using std::endl;
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adj;

	cout <<"Wedding time = \n";
	weeding.Show();
	cout<< endl;

	cout << "Waxing time = \n";
	waxing.Show();
	cout << endl;

	/* total time weeding and waxing*/
	total = weeding + waxing;
	cout << "Total time weeding woaxing\n";
	total.Show();
	cout << endl;

	/*difference in time weeding and waxing*/
	diff = weeding - waxing;
	cout << "Diffence in weeding and waxing\n";
	diff.Show();
	cout << endl;

	/*adjustin time for waxing*/
	adj = total * 1.5;
	cout << "Total adjusted time for weeding and waxing\n";
	adj.Show();
	cout << endl;

	return 0;
}

