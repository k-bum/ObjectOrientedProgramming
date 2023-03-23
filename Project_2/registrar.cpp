#include "registrar.h"

Registrar::Registrar() {}

void Registrar::enroll(Student& student, Course& course) {
	string name = student.getName();
	course.addStudent(name);
	string subject = course.getSubject();
	student.addCourse(subject);
}
