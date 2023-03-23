#include <iostream>
#include <string> //string��ü ���
#include <fstream> //ifstream ofstream
#include <iomanip> //setw
#include <stdio.h>
using namespace std;

bool getStu(ifstream& fin, int& id, int& exam1, int& exam2, int& exam3) {
	fin >> id >> exam1 >> exam2 >> exam3;
	if (!fin)
		return false;
	return true;
}
void calcAvgGrade(int exam1, int exam2, int exam3, int& avg, char& grade) {
	avg = (exam1 + exam2 + exam3) / 3;
	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else
		grade = 'F';
}
void writeStu(ofstream& fout, int id, int avg, char grade) {
	fout.fill('0');
	fout << setw(4) << id;
	fout.fill(' ');
	fout << setw(4) << avg;
	fout << setw(4) << grade << endl;
}

int main() {
	/*
	string s1 = "mouse";
	cout << s1 << endl;
	cout << s1.length() << ", " << s1.size() << endl << endl; //s1�� length, size ���
	cout << s1.empty() << endl;
	s1.clear();// s1 = "";
	cout << s1.empty() << endl;
	s1 = "Good";
	s1 = s1 + "-bye";
	// Good-bye (string)
	// 01234567 (index)
	cout << s1 << endl;
	cout << s1.at(4) << ", " << s1[4] << endl; // �ΰ��� ������� index 4 �� ���
	cout << s1.compare("Good-bye") + 1 << endl; // s1�� Good-bye �� (bool �� ���)
	cout << s1.compare("good-bye") + 1 << endl; // s1�� good-bye �� (bool �� ���)
	cout << s1.compare("z") + 1 << endl << endl; // s1�� ��z������ ũ�ų� ������ �� (bool �� ���)
	cout << s1.substr(5, 3) << endl; // s1�� index 5���� 3���� ���
	cout << s1.substr(2, 2) << endl; // s1�� index 2���� 2���� ���
	cout << s1.find("od") << endl; // od ��ġ ���
	cout << s1.find("od", 5) << endl;
	int od_index = s1.find("od");
	cout << s1.find("od", od_index + 2);
	cout << (s1.find("korea") == string::npos) << endl;
	return 0;
	*/

	/*
	ofstream fout // processor->file ����
	("example.txt");// example.txt ����

	string s2 = "Objective Oriented Programming";
	fout << s2 << endl;
	fout << "Random Variables" << endl;
	fout << "Linear Algebra" << endl;
	fout.close(); // fout �ݱ�

	ifstream fin;
	string s1;
	fin.open("example.txt");// example.txt ����

	
	if (!fin) {
		cout << "Error, no such file exists" << endl;
		exit(100);
	}
	while (getline(fin, s1)) { // line by line���� example.txt���� �о�ͼ� ���
		cout << s1 << endl;
	}
	*/

	//�ѹ��� ������� �ʱ� ������ �ּ�ó�� �س���
	/*
	char ch;
	while (fin.get(ch)) { // ���� ������ example.txt���� �о�ͼ� ���
		if (ch == ' ') {
			cout << '\n';
		}
		else {
			cout << ch;
		}
	}
	fin.close();
	*/

	/*
	double d1 = 1.23456789;
	cout << d1 << endl;
	cout.setf(ios::fixed); // ��°� ���� 10�� ����
	cout.width(10);
	cout.setf(ios::right);
	cout.precision(2);// �ֿ� �ڸ��� 3�ڸ��� ���
	cout << d1 << endl;

	char ch1;
	char ch2;
	// ch1, ch2 : enter �� z��. ( space + z )
	cin >> ch1;
	cout << "(" << ch1 << ")" << endl;
	cin.ignore(); // enter�� ���� cin���� ���� �ʵ��� ����
	cin.unsetf(ios::skipws); // space�� �Է����� �����ϰ� ��
	cin >> ch2;
	cout << "(" << ch2 << ")" << endl;
	return 0;
	*/

	//�ݺ�: ��� �л��� �а� ������ ������
		//getStu �Լ� = ch7STUFL.DAT���� ���� �б�: id, exam1, exam2, exam3
		//calcAvgGrade �Լ� = ���,grade ���: exam1, exam2, exam3 -> avg, grade
		//writeStu �Լ� = grade.txt ����: id, avg, grade

	/*
	ofstream fout("grade.txt");
	ifstream fin("ch7STUFL.DAT");

	int id, exam1, exam2, exam3, avg;
	char grade;
	while (getStu(fin ,id, exam1, exam2, exam3)) { // getStu�Լ� ���
		calcAvgGrade(exam1, exam2, exam3, avg, grade);// calcAvgGrade�Լ� ���
		writeStu(fout, id, avg, grade); // writeStu�Լ� ���
	}
	fin.close();
	fout.close();
	cout << "end" << endl;
	return 0;
	*/

	/*
	string city, area, street, building;
	string address;
	cout << "�� : ";
	cin >> city;
	cout << "�� : ";
	cin >> area;
	cout << "�� : ";
	cin >> street;
	cout << "�ǹ��� : ";
	cin >> building;
	address = city + area + street + building;
	cout << "�� �ּ� : " << address << endl;
	*/
	
	/*
	string data = "���,���α׷���,����,����ǹٺ�,���뿪,õ���ǻ��,�����,��ü����";
	string sep = ",";
	string input;
	string output;
	int pos = 0;
	cout << "Ű���� : ";
	cin >> input;
	cout << "�˻���� : ";
	while ((pos = data.find(sep)) != string::npos) {
		output = data.substr(0, pos);
		if (output.find(input) != string::npos) {
			cout << output << " ";
		}
		data = data.substr(pos + 1);
	}
	cout << "\n";
	return 0;
	*/
	
	/*
	ofstream fout;
	fout.open("temp.txt");
	int num;
	for (int i = 0; i < 100; i++)
	{
		num = rand() % 101;
		fout << num << " ";
		if (i % 10 == 9)
			fout << endl;
	}
	fout.close();
	return 0;
	*/
	
	/*
	ifstream fin;
	ofstream fout("output.txt");
	char s1;
	fin.open("text1.txt");

	while (fin.get(s1)) {
		fout.put(s1);
	}
	fin.close();
	fin.open("text2.txt");
	while (fin.get(s1)) {
		fout.put(s1);
	}
	fin.close();
	fout.close();
	return 0;
	*/
	
	
	int len;
	char s;
	cout << "legnth = ";
	cin >> len;
	ifstream fin;
	fin.open("input.txt");
	ofstream fout;
	fout.open("output.txt");

	int i = 0;
	while (fin.get(s)) {
		if (s != '\n') {
			fout.put(s);
			i++;
			if (i % len == 0) {
				fout.put('\n');
				i = 0;
			}
		}
	}
	fin.close();
	fout.close();
	
}