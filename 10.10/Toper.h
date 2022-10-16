#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Guess {
	int a;
	int b;

public:
	Guess() {
		a = 0;
		b = 0;
	}

	void Example() {
		Random();
		int answer;
		cout << "Solve an example: " << a << " + " << b << endl;
		cin >> answer;
		cin.ignore();
		if (answer != a + b) {
			throw "Incorret!";
		}
		cout << "Good!" << endl;
	}

	void Random() {
		srand(time(0));
		a = rand() % 142;
		b = rand() % 173;
	}

};
