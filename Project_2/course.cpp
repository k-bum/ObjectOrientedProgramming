#include "course.h"

Course::Course(string _subject, int _unit) : subject(_subject), unit(_unit) {}

string Course::getSubject() { return subject; }

void Course::addStudent(string name) {
	roster.addStudent(name);
}

void Course::getRoster() {
	vector<string> v = roster.getNames();
	if (v.size() > 0) {
		for (string elem : v) {
			cout << elem << endl;
		}
		cout << endl;
	}
}

void Course::print() {
	cout << "Course Name: " << subject << endl;
	cout << "Number of Units: " << unit << endl;
	cout << "List of Students" << endl;
	getRoster();
}
