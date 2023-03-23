#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Point {
private: // class �ȿ����� ��밡��
	int x; // ��� ����
	int y;
public: // class ��/�ۿ��� ��밡��
// Point() {}
	Point(int _x, int _y) { //constructor: class�� �̸��� ����,
	x = _x;
	y = _y;
}
	/*X,Y set�Լ� ����(�Լ� 1��)*/
	void setXY(int _x, int _y) {
		x = _x;
		y = _y;
	}

	/*X,Y get �Լ� ���� ����(�Լ� 2��)*/
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
	//private: //�������
	string name;
	string id;
	double balance;
public: // ����Լ�(method)
// 3���� ������ ����
	Account() {
		name = "";
		id = "";
		balance = 0.0;
	}// �⺻������. name : "", id : "", balance : 0 ���� �ʱ�ȭ

	Account(string _name, string _id) :
			name(_name), id(_id) {
		balance = 0.0;
	} // name, id �޾ƿ���, balance�� 0���� �ʱ�ȭ

	Account(string _name, string _id, double _balance) :
			name(_name), id(_id), balance(_balance) {
		if (_balance < 0) {
			balance = 0.0;
		}
	} // name, id , balance �޾ƿͼ� �ʱ�ȭ, balance < 0 �� ��� 0���� �ʱ�ȭ

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
		name = "ȫ�浿";
		major = "��ǻ�Ͱ��а�";
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
		cout << "�й� :" << id << endl;
		cout << "�̸� :" << name << endl;
		cout << "���� :" << major << endl;
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
			grad = "Freshmen(1�г�)";
		}
		else if (num_ == 2) {
			grad = "Sophomore(2�г�)";
		}
		else if (num_ == 3) {
			grad = "Junior(3�г�)";
		}
		else if (num_ == 4) {
			grad = "Senior(4�г�)";
		}
		else 
			grad = "About to graduate(5�г�)";
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
	Account ac1("�輺ȣ", "1002", 5000);
	Account ac2;
	ac2.print();
	cout << endl;
	ac1.print();
	int depo;
	cout << endl;
	cout << "������ �ݾ��� �Է��ϼ��� : ";
	cin >> depo;
	ac1.deposit(depo);
	ac1.print(); // print() �Լ��� ac1 ���
	int wdrw;
	cout << endl;
	cout << "����� �ݾ��� �Է��ϼ��� : ";
	cin >> wdrw;
	if (!ac1.withdraw(wdrw))
		cout << "�ܾ��� �����մϴ�." << endl;
	ac1.print();
	*/

	/*
	CStudent s1; // A
	s1.Display();
	CStudent s2(1999000000, "����ö", "���ؿ�ȭ��"); // B
	s2.Display();
	// C
	s1.setNumber(2006000000);
	s1.setName("�ΰ���");
	s1.setMajor("����Ʈ���");
	cout << "�й� :" << s1.getNumber() << endl;
	cout << "�̸� :" << s1.getName() << endl;
	cout << "���� :" << s1.getMajor() << endl;
	return 0;
	*/

	/*
	CStudent s[3]; // 3���� �л������� ������ class �迭
	int inputNumber; // Ű����� �й��� �Է� ���� ����
	string inputName, inputMajor; // Ű����� �̸�, ������ �Է� ���� ����
	int length = 0; // ���� �Էµ� �л��� ��
	while (1) {
		length++;
		while (1) {
			int n = 1;
			cout << length << " ��° �л� �Է�" << endl;
			cout << "�й� : ";
			cin >> inputNumber;
			cout << "�̸� : ";
			cin >> inputName;
			cout << "���� : ";
			cin >> inputMajor;
			for (int i = 0; i < length; i++) {
				if (inputNumber == s[i].getNumber()) {
					n = 0;
					cout << "���ߺ��� �й��� �����մϴ�" << endl;
					cout << endl;
					break;
				}
			}
			if (n)
				break;
		}
		cout << "���Է� �Ϸ�" << endl;
		cout << endl;
		s[length - 1].setNumber(inputNumber);
		s[length - 1].setName(inputName);
		s[length - 1].setMajor(inputMajor);

		if (length == 3)
			break;
	}
	cout << endl;
	cout << "----����Է��� �Ϸ�Ǿ����ϴ�----" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "�л�����" << endl;
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