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
		}
		else {
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
	strcpy_s(arr, 7, "Hello!");

	return arr;
}

int main_2() {

	char *array = sayHello();
	cout << array;
	delete[] array;

	system("pause");

	return 0;
}

// Dynamic array with perfect size//
char * getPerfectSizeCharArray(char *arr) {

	int size = strlen(arr);

	char *tempArr = new char[size + 1];

	/* source for strncpy_s: http://cppstudio.com/post/690/ */
	strncpy_s(tempArr, size + 1, arr, size);

	tempArr[size] = '\0';

	delete[] arr;
	arr = tempArr; // We rewrite array into "arr" pointer adress

	return arr;
}

int main_3() {

	char *arr = new char[1000];
	cin.get(arr, 1000);

	arr = getPerfectSizeCharArray(arr);

	cout << arr << '\n';
	delete[] arr;

	system("pause");

	return 0;
}

// Dynamic Structs //
struct User
{
	char *name;
};

int main() {

	int usersAmount;

	cout << "Enter amount of users: \n";
	cin >> usersAmount;

	User *users = new User[usersAmount];

	for (int i = 0; i < usersAmount; i++) {

		cin.ignore();
		char *name = new char[1000];
		cin.get(name, 1000);

		name = getPerfectSizeCharArray(name);

		User john = {
			name
		};

		users[i] = john;
	}

	for (int i = 0; i < usersAmount; i++) {
		cout << users[i].name << '\n';

		delete[] users[i].name;
	}

	delete[] users;

	system("pause");

	return 0;
}