#include <iostream>
#include "Number.h"
using namespace std;

int main()
{
	Number z(5,10);
	cout << z++ << endl;
	cout << z << endl;
	cout << ++z << endl;
	cout << z << endl;

	Number x;
	cout << "Input" << endl;
	cin >> x;

	cout << "Multiply-"<< x.multiply() << endl;
	cin.get();
	return 0;
	
	
}