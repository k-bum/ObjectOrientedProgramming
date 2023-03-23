#include <iostream>
#include <vector>
#include <iomanip>
#include <random>
using namespace std;
using Matrix = vector<vector<int>>;

// �迭�� ��� �ּҰ�(�����ּ�, ���ּ�)�� ����
void print(int* begin, int* end) {
	//int* curr = begin;
	//for (curr; curr < end; curr++)//�����ð��� ��� �ּҰ��� �������� for�� �ۼ�
		//cout << setw(4) << *curr;
	// while�� ���� �κ� - �����ð��� ��� �ּҰ��� �������� while�� �ۼ�
	int* curr = begin;
	while (curr < end) {
		cout << setw(4) << *curr;
		curr++;
	}
	cout << endl;
}

void print(const Matrix& mat) {
	// vector index�� �̿��� for �� �ۼ�
	/*
	for (unsigned row = 0; row < mat.size(); row++) {
		for (unsigned col = 0; col < mat[row].size(); col++) {
			mat.at(row).at(col);
			cout << setw(4) << mat[row][col];
		}
		cout << endl;
	}
	*/

	// vector ���Ҹ� �̿��� for �� �ۼ�
	/*
	for (const vector<int>& row : mat) {
		for (int col : row) {
			cout << setw(4) << col;
		}
		cout << endl;
	}
	*/

	//���� ������ ���, �ڷ��� �κ��� auto�� ġȯ����
	// vector<int> row = mat[0];
	// == auto row = mat[0];
	// auto�� ���� ���Ҹ� �̿��Ͽ� for�� ����
	for (auto row : mat) {
		for (int elem : row) {
			cout << setw(4) << elem;
		}
		cout << endl;
	}
}

//�Ҽ� : 1�� �ڱ��ڽ��� �����ϰ�� ����� ���� 1���� ū ����
bool is_prime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;// n�� i�� ���� �������� 0�̸� false�� ����
		return true;
}

vector<int> primes(int low, int high) {
	vector<int> result;
	for (int i = low; i <= high; i++)
		if (is_prime(i) == true)
			result.push_back(i);// �Ҽ��̸� (is_prime�� ���̸�) �ڿ� push
		return result;
}
void print(const vector<int>& v) {
	for (int elem : v) //vector index�� �ƴ� ���Ҹ� �̿��� for��
		cout << setw(4) << elem;
	cout << endl;
}

void print(int** m, int nRow, int nCol) {
	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < nCol; j++)
			cout << m[i][j] << '\t'; //2�� for���� index�� �̿��Ͽ� �迭 ���� ��� - ������ : '\t'
		cout << endl;
	}
}

bool found_char(const char* s, char ch) {
	while(*s != '\0') {
		if (*s == ch)
			return true;
		s++;
	}
	return false;
	// s�� ch ������ (s,s+1, ...)�� ch�� �ִ��� true/false return
}

vector<vector<int>> input(int row, int col) {
	vector<vector<int>>matrix(row, vector<int>(col));
	for (vector<int>& v : matrix) {
		for (int& elem : v) 
			elem = rand() % 19 - 9;	
	}
	return matrix;
}

void PrintMatrix(vector<vector<int>>v) {
	for (vector<int> row : v) {
		for (int elem : row)
			cout << setw(4) << elem;
		cout << endl;
	}
	cout << endl;
}

vector<vector<int>> MutiplyMatrix(vector<vector<int>>v1, vector<vector<int>>v2) {
	int row_1 = v1.size(), col_1 = v1[0].size(), 
		row_2 = v2.size(), col_2 = v2[0].size();
	vector<vector<int>>matrix(row_1, vector<int>(col_2));
	for (int i = 0; i < row_1; i++) {
		for (int j = 0; j < col_2; j++) {
			for (int k = 0; k < col_1; k++) {
				matrix[i][j] += v1[i][k] * v2[k][j];
			}
		}
			
	}
	return matrix;
}

int* make_arr(int n) {
	int* arr;
	arr = new int[n];
	arr[0] = 1;
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i-1] + 2;
	}
	return arr;
	delete[] arr;
}

void print_arr(int* a, int n) {
	cout << "\nOdd Number Array:" << endl;
	while (n) {
		cout << *a << " ";
		a++;
		n--;
	}
	cout << endl;
}

int sum_arr(int* a, int n) {
	int s = 0;
	for (int i = 0; i < n; i++)
		s += a[i];
	return s;
}

bool Duplicate(int* arr, int n) {
	for (int i = 0; i < n / 2; i++) {
		for (int j = i + 1; j < n / 2; j++) {
			if (arr[i] == arr[j])
				return true;
		}
	}
	return false;
}

int** buildTable(int n) {
	int row = n, col = n;
	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = 0;
		}
	}
	return arr;
}

void make_identity_matrix(int** table, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				table[i][j] = 1;
		}
	}
}
void printTable(int** table, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << table[i][j];
		}
		cout << '\n';
	}
}

int main() {
	
	int list[3] = { 10, 20, 30 };
	cout << list << '\t' << list[0] << endl;
	cout << list + 1 << '\t' << list[1] << endl;
	cout << list + 2 << '\t' << list[2] << endl;
	int* begin = list;
	int* end = list + 3;
	print(begin, end);
	return 0;
	

	/*
	// 2 x 3 matrix
	// vector<vector<int>> mat(2, vector < int>(3) );
	Matrix mat{ { 1, 2, 3 },
	{ 4, 5, 6 } };
	mat[0][0] = 1;
	mat[0][1] = 2;
	mat[0][2] = 3;
	mat[1][0] = 4;
	mat[1][1] = 5;
	mat[1][2] = 6;
	print(mat);
	return 0;
	*/

	/*
	int low, high;
	cin >> low >> high;
	vector<int> vec = primes(low, high);
	print(vec);
	return 0;
	*/

	/*
	const int size = 3;
	int list[size] = { 10, 20, 30 };
	int length = 3;
	cin >> length; // Ű����κ��� �迭�� ũ�⸦ �Է¹���
	int* list2 = new int[length]; //���� �迭 ����
	// double* list2 = new double[length]
	int* begin = list2;
	int* end = list2 + length;
	for (int* curr = begin; curr != end; curr++)
		cin >> *curr;
	for (int* curr = begin; curr != end; curr++)
		cout << *curr << '\t';
	cout << endl;
	delete[] list2; //�Ҵ� ����
	return 0;
	*/

	/*
	int nRow = 2, nCol = 2;
	int** matrix2;
	matrix2 = new int* [nRow]; // �����迭 ����(�����)
	for (int i = 0; i < nRow; i++)
		matrix2[i] = new int[nCol]; // �����迭 ����(������)
	matrix2[0][0] = 1; matrix2[0][1] = 2;
	matrix2[1][0] = 3; matrix2[1][1] = 4;
	print(matrix2, nRow, nCol);
	for (int i = 0; i < nRow; i++)
		delete[] matrix2[i];
	delete[] matrix2;
	return 0;
	*/

	/*
	//                    012345(6)
	const char* phrase = "phrase"; // ch[]
	
	for (char ch = 'a'; ch <= 'z'; ch++) { // 'a' == 65, 'z' == 97
		cout << ch << " is ";
		if (!found_char(phrase, ch))
			cout << "NOT";
		cout << " in (" << phrase << ")" << endl;
	}
	return 0;
	*/
	
	/*
	int row_a = 0, row_b = 0, col_a = 0, col_b = 0;

	cout << "A�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	cin >> row_a >> col_a;
	cout << "B�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	cin >> row_b >> col_b;
	cout << '\n';

	if (row_a == 0 || row_b == 0 || col_a == 0 || col_b == 0)
		cout << "����� ������ �� �����ϴ�." << endl;
	if (col_a != row_b)
		cout << "�� ����� ���� �� �����ϴ�." << endl;

	vector<vector<int>> A = input(row_a, col_a);
	vector<vector<int>> B = input(row_b, col_b);

	cout << "A ��� : " << endl;
	PrintMatrix(A);
	cout << '\n';
	cout << "B ��� : " << endl;
	PrintMatrix(B);
	cout << '\n';
	cout << "AB ����� : " << endl;
	PrintMatrix(MutiplyMatrix(A, B));
	*/
	
	/*
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int* arr = make_arr(n);	
	print_arr(arr, n);
	int sum = sum_arr(arr, n);
	cout << "\nSum of the array: " << sum << endl;
	delete[] arr;
	return 0;
	*/
	
	/*
	int n;
	while (true) {
		cout << "Please enter a number: ";
		cin >> n;
		if (n < 2) {
			cout << "Wrong number!!" << endl;
			exit(100);
		}

		int* arr;
		arr = new int[n/2];
		cout << "Size of random array: " << n/2 << endl;
		cout << "[Array]" << endl;
		for (int i = 0; i < n/2; i++) {
			arr[i] = rand() % n + 1;
			cout << arr[i] << " ";
		}
		cout << '\n';
		if (Duplicate(arr, n) == true)
			cout << "Duplicates found." << endl
			;
		else
			cout << "Duplicates not found." << endl;
		
		delete[] arr;
	}
	*/
	
	/*
	int n = 0;
	cout << "N�� �Է��Ͻÿ�: ";
	cin >> n;
	if (n < 1) {
		cout << "\n����� ������ �� �����ϴ�.\n" << endl;
		exit(EXIT_FAILURE);
	}
	int** table = buildTable(n);
	make_identity_matrix(table, n);
	printTable(table, n);
	for (int i = 0; i < n; i++)
		delete[] table[i];
	delete[] table;
	return 0;
	*/
}
