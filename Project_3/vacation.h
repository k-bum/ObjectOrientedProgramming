#ifndef vacation_h
#define vacation_h

#include <iostream>
#include <string>
using namespace std;

class Vacation {
public :
	virtual void bookHotels() {}
	virtual void bookFlights() {}
	virtual void bookTours() {}
};

#endif

