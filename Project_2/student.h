#ifndef student_h
#define student_h

#include "schedule.h"

class Student {
	string name;
	Schedule schedule;
public :
	Student(string _name);
	string getName();
	void getSchedule();
	void addCourse(string name);
	void print();
};

#endif
