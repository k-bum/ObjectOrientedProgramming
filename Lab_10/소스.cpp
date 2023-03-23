#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Point {
private: // class 안에서만 사용가능
	int x; // 멤버 변수
	int y;
public: // class 안/밖에서 사용가능
// Point() {}
	Point(int _x, int _y) { //constructor: class와 이름이 같다,
	x = _x;
	y = _y;
}
	/*X,Y set함수 구현(함수 1개)*/
	void setXY(int _x, int _y) {
		x = _x;
		y = _y;
	}

	/*X,Y get 함수 각각 구현(함수 2개)*/
	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	void print() {
		cout << x << ", " << y << endl;
	}
};

class Account {
	//private: //멤버변수
	string name;
	string id;
	double balance;
public: // 멤버함수(method)
// 3개의 생성자 구현
	Account() {
		name = "";
		id = "";
		balance = 0.0;
	}// 기본생성자. name : "", id : "", balance : 0 으로 초기화

	Account(string _name, string _id) :
			name(_name), id(_id) {
		balance = 0.0;
	} // name, id 받아오고, balance는 0으로 초기화

	Account(string _name, string _id, double _balance) :
			name(_name), id(_id), balance(_balance) {
		if (_balance < 0) {
			balance = 0.0;
		}
	} // name, id , balance 받아와서 초기화, balance < 0 인 경우 0으로 초기화

	void deposit(double _amt) { balance += _amt; }
	bool withdraw(double _amt) {
		if (balance - _amt < 0)
			return false;
		balance -= _amt;
		return true;
	}
	void print() {
		cout << name << ", " << id << ", " << balance << endl;
	}
};

class CStudent {
private :
	int id;
	string name;
	string major;
	
public :
	CStudent() {
		id = 2018000000;
		name = "홍길동";
		major = "컴퓨터공학과";
	}
	CStudent(int _id, string _name, string _major) :
		id(_id), name(_name), major(_major) {}

	void setNumber(int number) {
		id = number;
	}

	void setName(string _name) {
		name = _name;
	}

	void setMajor(string _major) {
		major = _major;
	}

	int getNumber() {
		return id;
	}

	string getName() {
		return name;
	}

	string getMajor() {
		return major;
	}

	void Display() {
		cout << "학번 :" << id << endl;
		cout << "이름 :" << name << endl;
		cout << "전공 :" << major << endl;
		cout << endl;
	}
};


class Student {
private :
	string name;
	string dpt;
	int id;
	vector<string> subject;
	vector<char> grade;
public :
	Student(string _name, int _id, string _dpt) :
		name(_name), dpt(_dpt), id(_id) {}
	Student() {
		name = "default";
		id = 0;
		dpt = "depart";
	}

	void setName(string _name) {
		name = _name;
	}
	void setID(int _id) {
		id = _id;
	}
	void setDpt(string _dpt) {
		dpt = _dpt;
	}
	void print() {
		cout << name << " " << id << " " << dpt << endl;
	}
	void addGrade(string _subject, char _grade) {
		subject.push_back(_subject);
		grade.push_back(_grade);
	}
	void printGrades() {
		int size = subject.size();
		for (int i = 0; i < size; i++) {
			cout << subject[i] << " " << grade[i];
			cout << endl;
		}
		getGPA();
	}

	void getGPA() {
		int size = grade.size();
		int score = 0;
		float total = 0;

		for (int i = 0; i < size; i++) {
			if (grade[i] == 'A')
				score = 4;
			else if (grade[i] == 'B')
				score = 3;
			else if (grade[i] == 'C')
				score = 2;
			else if (grade[i] == 'D')
				score = 1;
			else if (grade[i] == 'F')
				score = 0;
			total += score;
		}
		float avg = 0;
		avg = total / size;
		cout << "GPA : " << avg;
		
	}
	void getYear(int year) {
		int num = id / 100000;
		int num_ = year - num + 1;
		string grad;
		if (num_ == 1) {
			grad = "Freshmen(1학년)";
		}
		else if (num_ == 2) {
			grad = "Sophomore(2학년)";
		}
		else if (num_ == 3) {
			grad = "Junior(3학년)";
		}
		else if (num_ == 4) {
			grad = "Senior(4학년)";
		}
		else 
			grad = "About to graduate(5학년)";
		cout << grad << endl;
	}
};


int main() {
	
	/*
	Point pt1(1, 2), pt2(3, 4);
	pt1.setXY(10, 20);
	pt1.print();
	pt2.print();
	cout << pt1.getX() << endl;
	cout << pt2.getY() << endl;
	return 0;
	*/

	/*
	Account ac1("배성호", "1002", 5000);
	Account ac2;
	ac2.print();
	cout << endl;
	ac1.print();
	int depo;
	cout << endl;
	cout << "예금할 금액을 입력하세요 : ";
	cin >> depo;
	ac1.deposit(depo);
	ac1.print(); // print() 함수로 ac1 출력
	int wdrw;
	cout << endl;
	cout << "출금할 금액을 입력하세요 : ";
	cin >> wdrw;
	if (!ac1.withdraw(wdrw))
		cout << "잔액이 부족합니다." << endl;
	ac1.print();
	*/

	/*
	CStudent s1; // A
	s1.Display();
	CStudent s2(1999000000, "공지철", "연극영화과"); // B
	s2.Display();
	// C
	s1.setNumber(2006000000);
	s1.setName("민경훈");
	s1.setMajor("포스트모던");
	cout << "학번 :" << s1.getNumber() << endl;
	cout << "이름 :" << s1.getName() << endl;
	cout << "전공 :" << s1.getMajor() << endl;
	return 0;
	*/

	/*
	CStudent s[3]; // 3명의 학생정보를 저장할 class 배열
	int inputNumber; // 키보드로 학번을 입력 받을 변수
	string inputName, inputMajor; // 키보드로 이름, 전공을 입력 받을 변수
	int length = 0; // 현재 입력된 학생의 수
	while (1) {
		length++;
		while (1) {
			int n = 1;
			cout << length << " 번째 학생 입력" << endl;
			cout << "학번 : ";
			cin >> inputNumber;
			cout << "이름 : ";
			cin >> inputName;
			cout << "전공 : ";
			cin >> inputMajor;
			for (int i = 0; i < length; i++) {
				if (inputNumber == s[i].getNumber()) {
					n = 0;
					cout << "※중복된 학번이 존재합니다" << endl;
					cout << endl;
					break;
				}
			}
			if (n)
				break;
		}
		cout << "※입력 완료" << endl;
		cout << endl;
		s[length - 1].setNumber(inputNumber);
		s[length - 1].setName(inputName);
		s[length - 1].setMajor(inputMajor);

		if (length == 3)
			break;
	}
	cout << endl;
	cout << "----모든입력이 완료되었습니다----" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "학생정보" << endl;
		s[i].Display();
		cout << endl;
	}
	return 0;
	*/
	
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";
	Student Ron;
	Ron.print();
	cout << "\n";
	Ron.setName("Ron");
	Ron.setID(2014103959);
	Ron.setDpt("EE");
	Ron.print();
	Ron.getYear(2019);
	Ron.addGrade("Computer Architecture", 'B');
	Ron.addGrade("Maching Learning", 'B');
	Ron.addGrade("Computer Vision", 'C');
	Ron.printGrades();
	cout << "\n\n";
	return 0;
	
}