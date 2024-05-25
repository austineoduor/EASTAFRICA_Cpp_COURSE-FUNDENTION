#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
class Time
{
	private:
		int Hours;
		int Minutes;
	public:
	Time();
	Time(int h, int m=0);
	void Addhrs(int h);
	void Addmins(int m);
	void Reset(int h=0, int m=0);
	void Show();
	Time operator+ (const Time &t) const;
	Time operator- (const Time &t) const;
	Time operator* (double n) const;
};

#endif
