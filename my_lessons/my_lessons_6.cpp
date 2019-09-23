#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a = 5;
	int *p = &a;

	cout << &a << "\n";
	cout << p << "\n";
	cout << *p << "\n";

	system("pause");

	int size;

	cout << "Enter size of array: \n";
	cin >> size;

	int *numbers = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < size; i++) {
		cout << &numbers[i] << numbers[i] << "\n";
	}

	delete[] numbers;

	system("pause");
}

/*
int main() {
	int rows, cols;

	cout << "Enter rows number: \n";
	cin >> rows;

	cout << "Enter cols number: \n";
	cin >> cols;

	int **arr = new int *[rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		cout << "Enter numbers for " << i << " dimension: \n";
		for (int j = 0; j < cols; j++) {
			cout << "Enter number " << j << " \n";
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}

	delete[] arr;

	system("pause");
}
*/

/*
int main() {
	int arraySize, nameLenth;

	cout << "Enter users amount \n";
	cin >> arraySize;

	cout << "Enter users name length \n";
	cin >> nameLenth;

	char **users = new char* [arraySize];
	//char *array1 = (char*)malloc(x);

	for (int i = 0; i < arraySize; i++) {

		cin.ignore();

		char *userName = new char[nameLenth];
		cin.get(userName, nameLenth);

		users[i] = userName;
	}

	for (int i = 0; i < arraySize; i++) {
		cout << *users[i] << users[i] << "\n";
		delete[] users[i];
	}

	delete[] users;

	system("pause");
}
*/