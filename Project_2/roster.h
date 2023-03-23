#ifndef roster_h
#define roster_h

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Roster {
	vector<string> names;

public :
	Roster();

	vector<string> getNames();
	void addStudent(string name);
};

#endif