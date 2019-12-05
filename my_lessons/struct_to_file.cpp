#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

struct Human {
	char* fullName;
	int age;
	int height;
	int weight;
	char* city;
};

void addHuman(const char[]);
void showHumans();
int getFileLinesNumber(const char[]);
Human* getHumansDataFromFile(const char[]);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char command[100];
	while (true) {
		cin >> command;
		if (strcmp(command, "add_human") == 0)
		{
			addHuman("file.txt");
		}
		if (strcmp(command, "show_humans") == 0)
		{
			showHumans();
		}
		if (strcmp(command, "quit") == 0) {
			break;
		}
	}

	system("pause");

	return 0;
}

void addHuman(const char fileName[]) {

	char fullName[100], city[100];
	int age, height, weight;

	cin.ignore();
	cout << "Enter full name (ex. Ivanov Ivan Petrivich):";
	gets_s(fullName, 100);
	cout << "Enter age:";
	cin >> age;
	cout << "Enter height:";
	cin >> height;
	cout << "Enter weight:";
	cin >> weight;
	cin.ignore();
	cout << "Enter the city:";
	gets_s(city, 100);

	FILE *file;
	fopen_s(&file, fileName, "a");

	if (file != NULL)
	{
		char humanStr[300];
		sprintf_s(humanStr, 300, "%s, %d, %d, %d, %s\n", fullName, age, height, weight, city);

		fputs(humanStr, file);
		fclose(file);
	}
}

void showHumans() {
	Human* humans = getHumansDataFromFile("file.txt");
	int numberOfHumans = getFileLinesNumber("file.txt");

	for (int i = 0; i < numberOfHumans; i++) {
		cout << humans[i].fullName << " " << humans[i].city << '\n';
	}
}

int getFileLinesNumber(const char fileName[]) {
	FILE *file;
	fopen_s(&file, fileName, "r");

	int linesNumber = 0;

	if (file != NULL)
	{
		int character;
		while (true) {
			character = fgetc(file);
			if (character == '\n') {
				linesNumber++;
			}
			if (character == EOF) {
				linesNumber++;
				break;
			}
		}

		fclose(file);
	}

	return linesNumber - 1;
}

Human* getHumansDataFromFile(const char fileName[]) {

	int numberOfHumans = getFileLinesNumber(fileName);
	Human* humans = new Human[numberOfHumans];

	FILE *file;
	fopen_s(&file, fileName, "r");

	int age, height, weight;
	if (file != NULL)
	{
		int i = 0;
		while (!feof(file)) {
			Human newHuman;
			char *fullName = new char[100];
			char *city = new char[100];

			fscanf_s(file, "%[^,], %d, %d, %d, %[^\n]\n", fullName, 100, &age, &height, &weight, city, 100);
			newHuman = {
				fullName,
				age,
				height,
				weight,
				city
			};

			humans[i] = newHuman;
			i++;
		}

		fclose(file);
	}

	return humans;
}
