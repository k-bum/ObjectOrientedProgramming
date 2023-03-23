#ifndef builder_h
#define builder_h

#include "vacation.h"
#include "director.h"

class Package1 : public Vacation {
	void bookHotels() override { cout << "Hotels are booked." << endl; }
	void bookFlights() override { cout << "Flights are booked." << endl; }
};

class Package2 : public Vacation {
	void bookHotels() override { cout << "Hotels are booked." << endl; }
	void bookTours() override { cout << "Tours are booked." << endl; }
};

class Package3 : public Vacation {
	void bookHotels() override { cout << "Hotels are booked." << endl; }
	void bookFlights() override { cout << "Flights are booked." << endl; }
	void bookTours() override { cout << "Tours are booked." << endl; }
};

#endif
