#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

/* source https://learnc.info/c/bitwise_operators.html */

int main() {
	int a = 3; // 0011
	int b = 8; // 1000

	int c = a & b; // AND
	/*
	 a & b:
	 0 0 1 1
	 1 0 0 0
	 -------
	 0 0 0 0 -> 0
	*/

	cout << c << '\n';

	int d = a | b; // OR
	/*
	 a | b:
	 0 0 1 1
	 1 0 0 0
	 -------
	 1 0 1 1 -> 11
	*/

	cout << d << '\n';

	int e = ~a; // NOT
	/*
	 ~a:
	 0 0 1 1
	 -------
	 1 1 0 0 -> 12
	*/

	cout << e << '\n';

	int f = a ^ b; // XOR
	/*
	 a ^ b:
	 0 0 1 1
	 1 0 0 0
	 -------
	 1 0 1 1 -> 11
	*/

	cout << f << '\n';

	int g = a << 1;
	/*
	 a << 1:
	 0 0 1 1
	 -------
	 0 1 1 0 -> 6
	*/

	cout << g << '\n';

	int h = a >> 1;
	/*
	 a >> 1:
	 0 0 1 1
	 -------
	 0 0 0 1 -> 1
	*/

	cout << h << '\n';

	/* Change 2nd bit to 1 and 1st bit to 0 for "number" variable */
	int number = 3; // 0 0 1 1
	int result;
	result = (number | (1 << 2)); // 0 1 1 1 = > 7

	cout << result << '\n';

	system("pause");

	return 0;
}