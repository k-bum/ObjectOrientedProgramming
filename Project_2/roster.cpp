#include "roster.h"

Roster::Roster() {}

vector<string> Roster::getNames() { return names; }

void Roster::addStudent(string name) {
	names.push_back(name);
}
