#include <cstring>
#include "string.h"

using std::cout;
using std::cin;

int String::num_strings = 0;		//initializing static class member

//static method
int String::HowMany()
{
	return num_strings;
}

String::String(const char *s)
{
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str, s);
	num_strings++;
	//cout << num_strings << ":\"" <<str << "\" object created\n";
}
String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
	//cout << num_strings<< ": \"" << str << "\" default object created\n";
}

String::String(const String& st )
{
	num_strings++;
	len = st.len;
	str = new char [len+1];
	std::strcpy(str, st.str);
	//cout << num_strings << ": \"" << str << "\" object created by copy constructor\n";

}

String& String::operator=(const String& st)
{
	if (this == &st)
	{
		return *this;
	}
	delete [] str;
	 len = st.len;
	 str = new char[len+1];
	 std::strcpy(str, st.str);
	 return *this;
}

String& String::operator=(const char* st)
{
	delete [] str;
	len = std::strlen(st);
	str = new char [len+1];
	std::strcpy(str, st);
	return *this;
}

char& String::operator[](int i) //read/write access
{
	return str[i];
}

const char& String::operator[](int i)const //read only access
{
	return str[i];
}

bool operator<(const String& st, const String& st1 )
{
	return (std::strcmp(st.str, st1.str) < 0);
}

bool  operator>(const String& st, const String& st1)
{
	return (st1 < st);
}

bool operator==(const String& st, const String& st1)
{
	return (std::strcmp(st.str, st1.str) == 0);
}

String:: ~String()
{
	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	cout << num_strings << " left\n";
	delete [] str;
}

std::istream& operator >>(std::istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if(is)
	{
		st = temp;
	}
	while(is && is.get() != '\n')
	{
		continue;
	}
	
	return is;
}

std::ostream& operator<<(std::ostream& os, const String& st)
{
	os << st.str;
	return os;
}

