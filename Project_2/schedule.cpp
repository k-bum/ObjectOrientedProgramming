#include "schedule.h"

Schedule::Schedule() {}

vector<string> Schedule::getNames() { return names; }

void Schedule::addCourse(string name) {
	names.push_back(name);
}