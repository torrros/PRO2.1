#include "Number.h"
#include <iostream>

using namespace std;

Number::Number()
{
	first = 0;
	second = 0;
}

Number::Number(int f = 0,unsigned int s = 0)
{
	first = f;
	second = s;
}

Number::Number(const Number& n)
{
	first = n.first;
	second = n.second;
}

Number::~Number()
{		
}

double Number::multiply()
{
    return  first * second;
}

ostream& operator<<(ostream& os, const Number& n)
{
	os << string(n);
	return os;
}

istream& operator>>(istream& is, Number& n)
{
	cout << "First - "; is >> n.first;
	cout << "Second -"; is >> n.second;
	return is;
}

Number::operator string() const
{
	stringstream ss;
	ss << "First - " << first << endl;
	ss << " Second - " << second << endl;
	return ss.str();
}

Number& Number::operator++()
{
	++first;
	return	*this;
}

Number Number::operator++(int)
{
	Number t(*this);
	second++;
	return t;
	}

Number& Number::operator--()
{
	first--;
	return *this;
}

Number Number::operator--(int)
{
	Number t(*this);
	second--;
	return t;
}
