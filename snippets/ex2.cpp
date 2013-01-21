// Count non-whitespace char:

#include "functions.h"
#include <istream>

int nonWhiteSpaces(std::istream &in) {
	size_t count { 0 };
	char c { };
	while (!in.eof() && in.good()) {
		if (in >> c) {
			count++;
		}

	}
	return count;
}

// Count all chars:

#include "functions.h"
#include <istream>

int countAll(std::istream &in) {
	size_t count { 0 };
	char c { };
	while (!in.eof() && in.good()) {
		if (std::cin.get(c)) {
			count++;
		}

	}
	return count;
}

// Word Count:

#include "functions.h"
#include <istream>

int wordCount(std::istream &in) {
	size_t count { 0 };
	std::string words {};

	while(!in.eof() && in.good()) {
		if(in >> words) {
			count++;
		}
	}

	return count;
}

// Line Count:

#include "functions.h"
#include <istream>

int lineCount(std::istream &in) {
	size_t count {0};
	std::string line{};
	while(!in.eof() && in.good()) {
		std::getline(in, line);
		count++;
	}
	return count;
}

// Sum Numbers:

// Sum Int
#include "functions.h"
#include <iostream>

int sumInts(std::istream &in) {
	int sum { 0 };
	int count { 0 };
	while (!in.eof() && in.good()) {
		if (in >> count) {
			sum += count;
		}
	}
	return sum;
}

// Sum Double
#include <iostream>
#include "functions.h"

double sumFloats(std::istream &in) {
	double sum { 0.0 };
	double count { 0.0 };
	while (!in.eof() && in.good()) {
		if (in >> count) {
			sum += count;
		}
	}
	return sum;
}

// Average Numbers:

#include "functions.h"
#include <iostream>

int avarage(std::istream &in) {
	size_t count { 0 };
	int sum { 0 };
	int zsum { 0 };
	while (!in.eof() && in.good()) {
		if(in >> zsum) {
			sum += zsum;
			count++;
		}
	}

	return sum/count;
}

// MulTab:

#include "functions.h"
#include <iostream>
#include <iomanip>

void mulTab(std::istream &in) {
	unsigned int tablesize { 0 };
	if (in >> tablesize && tablesize <= 30) {
		std::cout << " ";
		for (unsigned int i = 1; i <= tablesize; i++) {
			std::cout << std::setw(4) << i;
		}
		std::cout << "\n";
		for (unsigned int i = 1; i <= tablesize; i++) {
			std::cout << i;
			for (unsigned int j = 1; j <=tablesize; j++) {
				std::cout << std::setw(4) << i * j;
			}
			std::cout << "\n";
		}
	}
}

// Dec Fraction:

#include "functions.h"
#include <iomanip>
#include <iostream>

void mulTab(std::istream &in) {
	unsigned int tablesize { 0 };
	if (in >> tablesize && tablesize <= 10) {
		std::cout << " ";
		for (unsigned int i = 1; i <= tablesize; i++) {
			std::cout << std::setw(5) << i;
		}
		std::cout << "\n";
		for (float i = 1.0; i <= tablesize; i++) {
			std::cout << i;
			for (float j = 1.0; j <=tablesize; j++) {
				std::cout << std::fixed << std::setprecision(2) << std::setw(5) << i / j;
			}
			std::cout << "\n";
		}
	}
}

// Bartender Cheat sheet:

#include "functions.h"
#include <iomanip>
#include <iostream>

void mulTab() {
	unsigned int tablesize { 10 };
	std::cout << std::right << std::setw(11) << "small" << std::setw(11) << "moass"
			<< std::setw(11) << "schnaps" << std::setw(11) << "soda" << "\n";
	for (double i = 1.0; i <= tablesize; i++) {
		std::cout << std::setprecision(0) << i << std::setprecision(2) << std::fixed << std::setw(10) << i * 4.65 << std::setw(10) << i * 9.15
				<< std::setw(10) << i * 3.85 << std::setw(10) << i * 2.95
				<< "\n";
	}
}

