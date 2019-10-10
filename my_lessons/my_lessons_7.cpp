#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

struct Human
{
	char name[30];
	int age;
	int height;
	int weight;
};

struct Team
{
	char name[30];
	Human human[10];
};

int main() {
	Human human1 = {
		"Stan",
		23,
		180,
		80
	};

	cout << human1.name << "\n";

	Human human2 = {};
	strcpy_s(human2.name,"Alex");
	human2.age = 30;
	human2.height = 185;
	human2.weight = 85;

	cout << human2.name << "\n";

	Team humanTeam1 = {
		"Dudes",
		{
			human1,
			human2
		}
	};

	cout << humanTeam1.name << "\n";
	cout << humanTeam1.human[0].name << "\n";

	for (int i = 2; i < 10; i++) {
		Human newHuman = {};
		cout << "Enter new player's name: " << "\n";
		cin.getline(newHuman.name, 30);
		cout << "Enter new player's age: " << "\n";
		cin >> newHuman.age;
		cout << "Enter new player's height: " << "\n";
		cin >> newHuman.height;
		cout << "Enter new player's weight: " << "\n";
		cin >> newHuman.weight;

		humanTeam1.human[i] = newHuman;
		cin.ignore();
	}

	system("pause");

	return 0;
}
