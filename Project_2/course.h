#ifndef course_h
#define course_h

#include "roster.h"

class Course {
	string subject;
	int unit;
	Roster roster;
public : 
	Course(string _subject, int _unit);
	string getSubject();
	void addStudent(string name);
	void getRoster();
	void print();
};

#endif 

