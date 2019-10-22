#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

// Split your phrase into words //
int main_1() {

	char phrase[50];
	char words[10][10];

	int n = 0;
	int k = 0;

	cin.get(phrase, 50);

	/* source for memset: http://cppstudio.com/post/673/ */
	memset(words, 0, sizeof(words[0]) * 10);

	for (int i = 0; i < 50; i++) {
		if (phrase[i] == '\0') {
			break;
		}
		if (phrase[i] != ' ') {
			words[n][k] = phrase[i];
			k++;
		} else {
			n++;
			k = 0;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << words[i] << '\n';
	}

	system("pause");

	return 0;
}

// return char array from function //
char* sayHello() {

	char *arr = new char[7];
	strcpy_s(arr, 7,  "Hello!");

	return arr;
}

int main() {

	char *array = sayHello();
	cout << array;
	delete[] array;

	system("pause");
}