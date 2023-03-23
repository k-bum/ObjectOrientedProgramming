#ifndef schedule_h
#define schedule_h

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Schedule {
	vector<string> names;
public :
	Schedule();
	vector<string> getNames();
	void addCourse(string name);
};

#endif
