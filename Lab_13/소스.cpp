#include <iostream>
#include <functional>
#include <algorithm> // for_each, copy, transform
#include <vector>
using namespace std;

int main() {
	vector<int> v1 = { 1,2,3,4 };
	for (int& elem : v1) {
		cout << elem << '\t';
	}
	cout << endl;

	// for_each(������ġ(iter), ����ġ(iter), �����Լ�)
	for_each(begin(v1), end(v1), [](int x) { cout << x << "\t";}); // v1�� ���ۺ��� ������ ���, (����� ������)
	cout << endl;

	for_each(begin(v1), end(v1), [](int& x) { x++; }); // v1�� ���ۺ��� ������ ��� elem++
	for_each(begin(v1), end(v1), [](int x) {cout << x << "\t";}); // v1�� ���ۺ��� ������ ���, (����� ������)
	cout << endl;

	int a = 10;
	for_each(begin(v1), end(v1), [a](int& x) { x += a; }); // v1�� ���ۺ��� ������ ��� elem+=a
	for_each(begin(v1), end(v1), [](int x) {cout << x << "\t";}); // v1�� ���ۺ��� ������ ���, (����� ������)
	cout << endl;

	vector<int> v2(v1.size());
	// copy: container1 (source)�� element�� container 2(destinstion)�� ����
	// copy(src������ġ, src����ġ, dst������ġ)
	// v1: {1, 2, 3, 4}
	// v2: {0, 0, 2, 3}
	copy(begin(v1) + 1, end(v1) - 1, begin(v2) + 2); // v1�� (����+1) ~ (��-1)�� v2�� (����+2)��ġ���� �ϳ��� ����
	for_each(begin(v2), end(v2), [](int x) {cout << x << "\t";}); // v2�� ���ۺ��� ������ ���, (����� ������)
	cout << endl;

	// transform: cont1�� element�� �����Ѵ���(�����Լ�) cont2�� ����
	// transform(src������ġ, src����ġ, dst������ġ, �����Լ�)
	transform(begin(v1), end(v1), begin(v2), [](int& x) { x *= x; return x; }); // v1�� ���ۺ��� ������ �����ؼ� v2�� ����
	for_each(begin(v2), end(v2), [](int x) {cout << x << "\t";}); // v2�� ���ۺ��� ������ ���, (����� ������)
	cout << endl;

	return 0;
}

