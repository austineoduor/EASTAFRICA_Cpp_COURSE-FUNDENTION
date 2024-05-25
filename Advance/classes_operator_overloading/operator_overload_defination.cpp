#include "header.h"

Time::Time()
{
	Hours = Minutes =0;
}
Time::Time(int h, int m)
{
	Hours = h;
	Minutes = m;
}

void Time::Addhrs(int h)
{
	Hours += h;
}
void Time::Addmins(int m)
{
	Minutes = m;
	Hours +=Minutes/60;
	Minutes %= 60;
}
void Time::Reset(int h, int m)
{
	Hours = h;
	Minutes = m;
}
void Time::Show()
{
	std::cout<< "Hours\tMinutes\n"<<Hours << " : " << Minutes <<std::endl;
}

Time Time::operator+ (const Time &t) const
{
	Time sum;
	sum.Minutes = Minutes + t.Minutes;
	sum.Hours = Hours + t.Hours + sum.Minutes / 60;
	sum.Minutes = sum.Minutes % 60;
	return sum;
}

Time Time::operator- (const Time &t) const
{
	Time diff;
	int total_1, total_2, total_diff;
	total_1 = t.Minutes + (60 * t.Hours);
	total_2 = Minutes + (60 * Hours);
	total_diff = total_2 - total_1;
	diff.Hours = (total_diff / 60);
	diff.Minutes = (total_diff % 60);
	return diff;
}
Time Time::operator* (double n) const
{
	Time result;
	long total;
	total= (Minutes + (60 * Hours)) * n;
	result.Hours = total / 60;
	result.Minutes = total % 60;
	return result;
}
