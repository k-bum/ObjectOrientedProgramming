#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	string id;
	int balance;
	static int sum;
public :
	Account() : name(""), id(""), balance(0) {}
	Account(string _name, string _id, int _balance) : 
	name(_name), id(_id), balance(_balance) {}

	string getName() const { return name; }
	string getId() const { return id; }
	int getBalance() const { return balance; }

	void setName(string _name) { name = _name; }
	void setId(string _id) { id = _id; }
	void setBalance(int _balance) { 
		balance = _balance;
		sum += balance;
	}

	static int getSum() { return sum; }
};

int Account::sum = 0;

int main() {
	int num = 0;
	cout << "�� �л� �� �Է�: ";
	cin >> num;
	Account* acnt = new Account[num];
	
	for (int i = 0; i < num; i++) {
		string id, name;
		int balance;

		cout << i + 1 << "��° �л� ���� �Է� : " << "�й� : ";
		cin >> id;
		cout << endl;
		cout << "�̸� : ";
		cin >> name;
		cout << endl;
		cout << "�ܾ� : ";
		cin >> balance;
		cout << "============================" << endl;
		cout << endl;

		acnt[i].setName(name);
		acnt[i].setId(id);
		acnt[i].setBalance(balance);

		for (int j = 0; j < i; j++) {
			if (id == acnt[j].getId()) {
				break;
			}
		}
	}
	cout << "ȸ���� �ݾ� : " << Account::getSum() << endl;
	delete[] acnt;
	return 0;
}