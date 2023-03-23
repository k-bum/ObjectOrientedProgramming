#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class FileNotFoundException : public exception {
	string message; 
public:
	FileNotFoundException(const string& fname) :
		message("File \"" + fname + "\" not found") {}
	virtual const char* what() const throw () {
		return message.c_str();
	}
};

int main()
{
	ofstream ofs;
	ofs.open("temp.txt");
	// ������ 10x10 ��� ���� ����
	int num;

	for (int i = 0; i < 100; i++) {
		num = rand() % 101;
		ofs << num;
		ofs << ' ';
		if (i % 10 == 9) {
			ofs << '\n';
		}
	}
	ofs.close();

	// �����̸� �Է�
	cout << "���� �̸� : ";
	string filename;
	cin >> filename;

	// �Է¹��� �����̸��� �´� ������ �о�� vector�� �Է� ��, ��� ����	
	ifstream fin(filename);

	try {
		if (fin.good()) {
			int row = 0, col = 0, n;
			cout << "����� �� ũ�� : ";
			cin >> row;
			cout << "����� �� ũ�� : ";
			cin >> col;

			vector <vector <int>> result(row, vector <int>(col));
			vector <vector<int>> v(10, vector <int>(10));

			while (true) {
				for (int i = 0; i < 10; i++) {
					for (int j = 0; j < 10; j++) {
						fin >> n;
						v[i][j] = n;
					}
				}
				fin.close();
				break;
			}

			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					if (j >= 10) {
						throw string("\ninvalid vector<T> subscript");
					}
					result[i][j] = v[i][j];
					cout << result[i][j] << ' ';
				}
				cout << endl;
			}
		}
		else throw FileNotFoundException(filename);
	}

	catch (exception& e) {
		cout << endl;
		cout << e.what() << endl;
	}
	catch (string e) {
		cout << e << endl;
	}

	return 0;
}
