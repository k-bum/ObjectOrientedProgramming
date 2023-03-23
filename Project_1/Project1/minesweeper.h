#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void minesweeper(string commands, string output); 

vector<vector<char>> load(string file); 

char touch(vector<vector<char>>& board, int x, int y); 

vector<vector<char>> display(vector<vector<char>>& board);


