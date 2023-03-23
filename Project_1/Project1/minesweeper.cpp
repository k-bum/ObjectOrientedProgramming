#include "minesweeper.h"

int main() {
	
	cout << "Testing minesweeper" << endl;
	minesweeper(".\\test1commands.txt", "test1_output_mine.txt");
	minesweeper(".\\test2commands.txt", "test2_output_mine.txt");
	minesweeper(".\\test3commands.txt", "test3_output_mine.txt");
	minesweeper(".\\test4commands.txt", "test4_output_mine.txt");
	minesweeper(".\\test5commands.txt", "test5_output_mine.txt");
	minesweeper(".\\test6commands.txt", "test6_output_mine.txt");
	minesweeper(".\\test7commands.txt", "test7_output_mine.txt");
	minesweeper(".\\test8commands.txt", "test8_output_mine.txt");
	minesweeper(".\\test9commands.txt", "test9_output_mine.txt");
	minesweeper(".\\test10commands.txt", "test10_output_mine.txt");

	return 0;
}

void minesweeper(string commands, string output) {
	fstream fin;
	fin.open(commands);
	fstream fout;
	fout.open(output);
	string line;
	int num_touch = 0;
	char s;
	vector<vector<char>> board(8, vector<char>(8));
	if (fin.is_open()) {
		while (getline(fin, line)) {
			fout << "Command: " << line << '\n';
			if (line.substr(0, 4) == "load") {
				board = load(line.substr(5, 15));
			}
			if (line.substr(0, 5) == "touch") {
				s = touch(board, line[6] - '0', line[8] - '0');
				num_touch ++;
				if (s == '*') {
					break;
				}
			}
			if (line == "display") {
				vector<vector<char>> board_(8, vector<char>(8));
				board_ = display(board_);
				for (vector<char> row : board_) {
					for (char col : row) {
						fout << col;
					}
					fout << '\n';
				}
				fout << '\n';
			}
		}
	}
	fout << "Game Over" << '\n';
	fout << "~~~~~~~~~" << '\n';
	fout << "Final Board" << '\n';
	for (vector<char> row : board) {
		for (char col : row) {
			fout << col;
		}
		fout << '\n';
	}
	fout << '\n';
	fout << "Spaces touched: " << num_touch;
	fin.close();
	fout.close();
}

vector<vector<char>> load(string file) {
	fstream fin(file);
	vector<vector<char>> board(8, vector<char>(8));

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			fin >> board[i][j];
			if (board[i][j] == '*') {
				board[i][j] = '@';
			}
		}
	}
	return board;
}

char touch(vector<vector<char>>& board, int x, int y) {
	int i = 0;
	int j = 0;
	if (board[x - 1][y - 1] == '.') {

		if (x == 1 && y == 1) {
			int num = 0;
			for (int i = x - 1; i < x + 1; i++) {
				for (int j = y - 1; j < y + 1; j++) {
					if (board[i][j] == '@') {
						num++;
					}
				}
			}
			board[x - 1][y - 1] = char(num) + '0';
		}

		else if (x == 1 && y == 8) {
			int num = 0;
			for (int i = x - 1; i < x + 1; i++) {
				for (int j = y - 2; j < y; j++) {
					if (board[i][j] == '@') {
						num++;
					}
				}
			}
			board[x - 1][y - 1] = char(num) + '0';
		}

		else if (x == 8 && y == 1) {
			int num = 0;
			for (int i = x - 2; i < x; i++) {
				for (int j = y - 1; j < y + 1; j++) {
					if (board[i][j] == '@') {
						num++;
					}
				}
			}
			board[x - 1][y - 1] = char(num) + '0';
		}

		else if (x == 8 && y == 8) {
			int num = 0;
			for (int i = x - 2; i < x; i++) {
				for (int j = y - 2; j < y; j++) {
					if (board[i][j] == '@') {
						num++;
					}
				}
			}
			board[x - 1][y - 1] = char(num) + '0';
		}

		else if (x >= 2 && x <= 7 && y >= 2 && y <= 7) {
			int num = 0;
			for (int i = x - 2; i < x + 1; i++) {
				for (int j = y - 2; j < y + 1; j++) {
					if (board[i][j] == '@') {
						num++;
					}
				}
			}
			board[x - 1][y - 1] = char(num) + '0';
		}

		else {
			if (x == 1) {
				int num = 0;
				for (int i = x - 1; i < x + 1; i++) {
					for (int j = y - 2; j < y + 1; j++) {
						if (board[i][j] == '@') {
							num++;
						}
					}
				}
				board[x - 1][y - 1] = char(num) + '0';
			}
			else if (x == 8) {
				int num = 0;
				for (int i = x - 2; i < x; i++) {
					for (int j = y - 2; j < y + 1; j++) {
						if (board[i][j] == '@') {
							num++;
						}
					}
				}
				board[x - 1][y - 1] = char(num) + '0';
			}
			else if (y == 1) {
				int num = 0;
				for (int i = x - 2; i < x + 1; i++) {
					for (int j = y - 1; j < y + 1; j++) {
						if (board[i][j] == '@') {
							num++;
						}
					}
				}
				board[x - 1][y - 1] = char(num) + '0';
			}
			else if (y == 8) {
				int num = 0;
				for (int i = x - 2; i < x + 1; i++) {
					for (int j = y - 2; j < y; j++) {
						if (board[i][j] == '@') {
							num++;
						}
					}
				}
				board[x - 1][y - 1] = char(num) + '0';
			}
		}
	}
	if (board[x - 1][y - 1] == '@') {
		board[x - 1][y - 1] = '*';
	}
	return board[x - 1][y - 1];
}

vector<vector<char>> display(vector<vector<char>>& board) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = '.';
		}
	}
	return board;
}
