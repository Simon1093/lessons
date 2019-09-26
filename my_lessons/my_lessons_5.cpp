#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void addUser(char userData[]) {
	FILE *file;

	fopen_s(&file, "file.txt", "a");

	if (file != NULL)
	{
		fputs(userData, file); // write string in file
		fclose(file);
	}
}

void getUserData() {
	FILE *file;

	fopen_s(&file, "file.txt", "r");

	char userName[20], userLastName[20], userSurname[20];

	if (file != NULL)
	{
		while (!feof(file)) {
			fscanf_s(file, "%s %s %s\n", userName, 20, userLastName, 20, userSurname, 20); // read string from file
			printf("%s %s %s\n", userName, userLastName, userSurname);
		}
		
		fclose(file);
	}
}



int main() {
	char userData[] = "Ivanov Ivan Petrovich\n";

	addUser(userData);

	system("pause");

	getUserData();

	system("pause");

	return 0;
}

//int main() {
//	/*ofstream file;
//	file.open("test.txt");
//	file << "qweqweqwe asdasdas sdfsdfsdf asdasdqwq232";
//	file.close();
//	*/
//
//	char text[200], text1[200];
//
//	ifstream file("test.txt");
//	if (!file.is_open()) {
//		cout << "Error! File not found!";
//	} else {
//
//	/*	file >> text;
//		cout << text << endl;*/
//
//		while (file.getline(text1, 200)) {
//			cout << text1 << endl;
//		}
//		file.close();
//	}
//
//	return 0;
//}


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