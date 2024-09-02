#include <iostream>
#include "string.h"
const int Arsize = 10;
const int Maxlen = 81;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	String name;
	
	cout << "Hi, what's yor name?\n>>";
	cin >> name;

	cout << name << ", please enter upto  " << Arsize
		<< " short sayings < empty line to quit:\n";

	String saying[Arsize];
	char temp[Maxlen];
	int i;

	for (i = 0; i< Arsize; i++)
	{
		cout << i+1 << ":";
		cin.get(temp, Maxlen);
		while (cin && cin.get() != '\n')
		{
			continue;
		}
		if (!cin || temp[0] == '\0')
		{
			break;
		}
		else 
		{
			saying[i] = temp;
		}

	}
	int total = i;

	if (total > 0)
	{
		cout << "Here are your sayings:\n";
		for (i = 0; i < total; i++)
		{
			cout << saying[i][0] << ": " << saying[i] << endl;
		}
		int shortest = 0;
		int first = 0;
		for (i = 1; i < total ; i++)
		{
			if (saying[i].length() < saying[shortest].length())
			{
				shortest = i;
			}
			if (saying[i] < saying[first])
			{
				first = i;
			}
		}
		cout << "shortes saying:\n" << saying[shortest] << endl;
		cout << "First alphabetically:\n" << saying[first] << endl;
		cout << "This program used " << String::HowMany()
			<<" String objects.\n Bye!.\n";
	}
	else
	{
		cout << "No input! Bye!.\n";
	}

	return (0);
}
