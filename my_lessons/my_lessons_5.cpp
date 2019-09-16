#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	/*ofstream file;
	file.open("test.txt");
	file << "qweqweqwe asdasdas sdfsdfsdf asdasdqwq232";
	file.close();
	*/

	char text[200], text1[200];

	ifstream file("test.txt");
	if (!file.is_open()) {
		cout << "Error! File not found!";
	} else {

	/*	file >> text;
		cout << text << endl;*/

		while (file.getline(text1, 200)) {
			cout << text1 << endl;
		}
		file.close();
	}

	return 0;
}

/*
int main() {
	int  i_val = 7;
	int *i_ptr = &i_val;

	cout << i_val << endl;
	cout << *i_ptr << endl;

	*i_ptr = *i_ptr + 1;

	cout << i_val << endl;

	return 0;
}
*/