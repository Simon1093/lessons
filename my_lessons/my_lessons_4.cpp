#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

string mySecondFunction(string p) {
	return "Result :" + p + " ! \n";
}

string myFunctionA(char x[], char y[]) {
	string d, s, z;

	d = string(x);
	s = string(y);

	z = d + s;

	return mySecondFunction(z);
}

string myThirdFunction(char x[], string y) {
	if (string(x) == y) {
		return "Good!";
	}
	else {
		return "Not good...";
	}
}

/*
int main() {

	char a[10] = "123";
	char b[5] = "456";
	char c[10];

	cout << "Pease enter: 123456 \n";
	cin >> c;

	cout << myThirdFunction(c, myFunctionA(a, b));

	return 0;
}
*/