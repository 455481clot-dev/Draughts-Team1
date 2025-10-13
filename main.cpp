#include <iostream>
#include <vector>

std::vector<char> board{
	'.','x','.','x','.','x','.','x',
	'x','.','x','.','x','.','x','.',
	'.','x','.','x','.','x','.','x',
	'.','.','.','.','.','.','.','.',
	'.','.','.','.','.','.','.','.',
	'o','.','o','.','o','.','o','.',
	'.','o','.','o','.','o','.','o',
	'o','.','o','.','o','.','o','.',
};

void printBoard() {
	for (int i = 0; i < board.size(); ++i) {
		if (i % 8 == 0)
			std::cout << '\n';

		std::cout << ' ' << board.at(i);
	}
	std::cout << "\n";
}

void movePawn(int from, int to) {
	board.at(to) = board.at(from);
	board.at(from) = '.';
}

int main() {
	printBoard();
	movePawn(40, 33);

	printBoard();
	movePawn(40, 33);

	printBoard();
}
