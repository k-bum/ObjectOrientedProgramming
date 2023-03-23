#include "student.h"

Student::Student(string _name) : name(_name) {}
string Student::getName() { return name; }
void Student::getSchedule() {
	vector<string> v = schedule.getNames();
	if (v.size() > 0) {
		for (string elem : v) {
			cout << elem << endl;
		}
		cout << endl;
	}
}
void Student::addCourse(string name) {
	schedule.addCourse(name);
}
void Student::print() {
	cout << "Course Name: " << name << endl;
	cout << "List of Courses" << endl;
	getSchedule();
}
