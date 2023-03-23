#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
	char grade = 'X';
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score < 0 || score > 100) {
		cout << "The score (" << score << ") is invalid" << endl;
	}
	else if(score >= 90) {
		grade = 'A';
		cout << "Your grade is " << grade << endl;
	}
	else if(score >= 80) {
	grade = 'B';
	cout << "Your grade is " << grade << endl;
	}
	else if(score >= 70) {
	grade = 'C';
	cout << "Your grade is " << grade << endl;
	}
	else if(score >= 60) {
	grade = 'D';
	cout << "Your grade is " << grade << endl;
	}
	else {
	grade = 'F';
	cout << "Your grade is " << grade << endl;
	}
	return 0;
	*/

	/*
	int num = 1;
	int count = 1;
	cout.imbue(locale(""));
	while (count <= 20) {
		num *= 2;
		cout << count << '\t' << setw(10) << num << '\n';
		count += 1;
	}
	return 0;
	*/
	/*
	int column = 1, row = 1;
	while (row <= 10) {
		while (column <= 10) {
			int num;
			if (column == row) {
				num = 1;
			}
			else {
				num = 0;
			}
			cout << setw(4) << num;
			column += 1;
		}
		cout << endl;
		column = 1;
		row += 1;
	}
	return 0;
	*/
	/*
	int num;
	while (true) {
		cout << "Enter the number (0, 10]: ";
		cin >> num;
		if (num <= 10 && num > 0) {
			break;
		}
	}
	cout << "Success!" << endl;
	return 0;
	*/

	/*
	int num;
	do {
		cout << "Enter the number (0, 10]: ";
		cin >> num;
	} while (num > 10 || num <= 0);
	cout << "Success!" << endl;
	return 0;
	*/

	/*
	int n, m;
	cout << "Enter n for n x m matrix: ";
	cin >> n;
	cout << "Enter m for n x m matrix: ";
	cin >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << setw(4) << i * j;
		}
		cout << "\n";
	}
	*/

	/*
	char key;
	cout << "Enter a key (p or q): ";
	cin >> key;
	switch (key) {
	case 'p' :
		cout << "Pause" << endl;
		break;
	case 'P' :
		cout << "Pause" << endl;
		break;
	case 'q' :
		cout << "Quit" << endl;
		break;
	case 'Q' :
		cout << "Quit" << endl;
		break;
	default :
		cout << "Default" << endl;
	}
	return 0;
	*/
	/*
	int n = 1;
	int num;
	while (n <= 5) {
		cout << n << "번째 정수 : ";
		cin >> num;
		if (num % 2 == 0) {
			cout << num << "은(는) 짝수입니다." << endl;
		}
		else {
			cout << num << "은(는) 홀수입니다." << endl;
		}
		n += 1;
	}
	*/
	
	/*
	int num;
	int sum = 0;
	cout << "number : ";
	cin >> num;
	int n = num;
	while (num > 0) {
		sum += num;
		num -= 1;
	}
	cout << "Sum of 1 to " << n << " = " << sum << endl;
	*/

	int num;
	int sum = 0;
	cout << "number : ";
	cin >> num;
	while (num > 0) {
		if (num % 2 != 0 && num % 3 != 0) {
			sum = sum + num;
		}
		else {
			sum += 0;
		}
		num -= 1;
	}
	cout << "sum : " << sum << endl;

	/*
	int n;
	while (true) {
		cout << "단 수를 입력하세요: ";
		cin >> n;
		if (n == -1) {
			cout << "종료합니다." << endl;
			break;
		}
		else if (n < 0 || n > 9) {
			cout << "1 부터 9까지의 정수를 입력해주세요." << endl;
			cout << "\n";
		}
		else {
			for (int i = 1; i <= 9; i++) {
				cout << n << "*" << i << " = " << n * i << endl;
			}
			cout << "\n";
		}
	}
	*/
	
	/*
	int x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	int a = x;
	int b = y;
	while (true) {
		if (x % y != 0) {
			int z = x;
			x = y;
			y = z % y;
		}
		else {
			break;
		}
	}
	cout << "gcd(" << a << "," << b << ") = " << y << endl;
	*/
} 

