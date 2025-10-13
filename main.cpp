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

int main() {
	for (int i = 0; i < board.size(); ++i) {
		if (i % 8 == 0)
			std::cout << '\n';

		std::cout << ' ' << board.at(i);
	}

	std::cout << "\n\n";
}
