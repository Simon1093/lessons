#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>

using namespace std;

int main() {
	const int arrayLength = 5;

	int x[arrayLength];

	for (int i = 0; i < arrayLength; i++) {
		int value;

		cout << "Enter " << i << " element: \n";
		cin >> value;

		x[i] = value;
	}

	int searchEl, occurencesNumber = 0;

	cout << "Enter search element: \n";
	cin >> searchEl;

	for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
		if (x[i] == searchEl) {
			occurencesNumber++;
		}
	}

	cout << "Occurences: \n" << occurencesNumber;

	return 0;
}
