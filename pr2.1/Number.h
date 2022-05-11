#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Number
{
	double first;
	 double second;
public:
	Number();
	Number(int f , unsigned int s );
	~Number();
	Number(const Number& );
	
	int getfirst() const { return first; }
	unsigned int getsecond() const { return second; }
	void setfirst(int first) { first = first; }
	void setsecond(unsigned int second) { second = second; }
	double multiply();
	
	operator string() const;
	Number& operator--();
	Number& operator++();
	Number operator--(int);
	Number operator++(int);

	friend ostream& operator<<(ostream& out, const Number& n);
	friend istream& operator>>(istream& in, Number& n);
	
};

	