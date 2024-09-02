#include <iostream>
#ifndef STRING_H_
#define STRING_H_

class String
{
	private:
		char *  str;
		int len;
		static const int CINLIM = 80;
		static int num_strings;

	public:
		//constructors
		String();
		String(const char *s);
		String(const String &st);

		//member fuction
		int length()const
		{
			return len;
		}

		//operator overloading
		String& operator=(const String &st );
		String& operator=(const char *);
		char& operator[](int i);
		const char& operator[](int i)const;

		//static member function
		static int HowMany();

		//overloadded friends fuctions
		friend bool operator>(const String& st, const String& st1);
		friend bool operator<(const String& st, const String& st1);
		friend bool operator==(const String& st, const String& st1);
	
		friend std::istream& operator>>(std::istream& is, String& st);
		friend std::ostream& operator<<(std::ostream& os,
				const String & st);
		//destructor
		~String();
};

#endif
