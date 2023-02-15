#include<iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	const int cinq = 5;
	int bloc[cinq][cinq];
	int nom = 5;
	int sei = 0;
	int y = 0;
	int N = 0;
	int k = 0;
	int h = 0;
	std::cout << '\n';
	while (k != 24) {
		nom = nom - 1;
		for (N; N < nom; N++) {
			bloc[y][N] = k;
			k++;
		}
		for (h; h < nom; h++) {
			bloc[y][N] = k;
			k++;
			y++;
		}
		for (N; N > sei; N--) {
			bloc[y][N] = k;
			k++;
		}
		for (h; h > sei; h--) {
			bloc[y][N] = k;
			k++;
			y--;
		}
		nom = nom - 1;
		sei = sei +2;
		N= N + 1;
		y = y + 1;
	
		for (N; N < nom; N++) {
			bloc[y][N] = k;
			k++;
		}
		for (h; h < nom; h++) {
			bloc[y][N] = k;
			k++;
			y++;
			nom--;
		}
		N = N + 0;
		sei -= 1;
		for (N; N > sei; N--) {
			bloc[y][N] = k;
			k++;
		}
		h = h + 1;
		for (h; h > sei; h--) {
			bloc[y][N] = k;
			k++;
			y--;
		}
		bloc[cinq / 2][cinq / 2] = k;
	} ;
	std::cout << "\n";
	for (int i = 0; i < cinq; i++) {
		for (int j = 0; j < cinq; j++) {
			std::cout << bloc[i][j] << '\t';
		}
		std::cout << '\n';
	}

	return 0;
	}
