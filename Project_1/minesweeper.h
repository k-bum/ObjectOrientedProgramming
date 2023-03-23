#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void minesweeper(string commands, string output) {
	fstream fin (commands);
	fstream fout;
	string line;
	if (fin.is_open()) {
		while (getline(fin, line)) {
			
		}
	}

}

void load(string file) {
	fstream fin(file);
	vector<vector<char>> board(8, vector<char>(8));
	char s;
	if (fin.is_open()) {
		while (fin.get(s)) {
			if (s != '\n') {
				for (vector<char>& row : board) {
					for (char elem : row) {
						elem = s;
					}
				}
			}
		}
	}
	fin.close()
	cout << board << endl;
}

void touch(int x, int y) {

}

void display() {

}

int main() {
	load("test1board.txt")
}

