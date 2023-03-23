#ifndef registrar_h
#define registrar_h

#include "course.h"
#include "student.h"
using namespace std;

class Registrar {
public :
	Registrar();
	void enroll(Student& student, Course& course);
};

#endif