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
	 00000000000000000000000000000011
	 -------
	 11111111111111111111111111111100 -> ‭4 294 967 292‬ for "unsigned int"
	 11111111111111111111111111111100 -> -4 for "int"
	*/

	/*
	Why -3 is 11111111 11111101? That's why:
	 3  00000000 00000011
	-3  11111111 11111101
	----------------------
	 0  00000000 00000000
	*/

	cout << e << '\n'; // shows int
	printf("%u\n", e); // shows unsigned int

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
	int result, result1;
	result = (number | (1 << 2)); //  0 0 1 1 -> 0 1 1 1 = > 7 (Change 2nd bit to 1)
	cout << result << '\n';

	result1 = (result & ~(1 << 1)); // 0 1 1 1 -> 0 1 0 1 = > 5 (Change 1st bit to 0)
	cout << result1 << '\n';

	system("pause");

	return 0;
}