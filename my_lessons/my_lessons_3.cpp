#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

/*
int main() {

	const int arrayLength = 20;
	int k, occurence = 0;
	char words[arrayLength];

	scanf_s("%s", words, arrayLength);

	for (k = 0; k < arrayLength; k++) {
		if (words[k] == 'a') {
			occurence++;
			words[k] = 'M';
		}
	}

	printf_s("Number of \'a\' is %d \n", occurence);

	printf_s("%s", words);

	return 0;
}
*/

/*
int main() {

	char str[80], str1[80];
	int i;
	sscanf_s("hello Johny 123", "%s %s %d", str, sizeof(str), str1, sizeof(str1), &i);
	printf("%s %d", str, i);

	return 0;
}
*/

/*
int main() {

	const int usersAmount = 3;
	const int usersNamesLength = 20;

	char users[usersAmount][usersNamesLength];

	for (int i = 0; i < usersAmount; i++) {
		printf_s("enter name of a %d user: \n", i);
		scanf_s("%s", users[i], usersNamesLength);
	}

	for (int i = 0; i < usersAmount; i++) {
		for (int j = 0; j < usersNamesLength; j++) {
			if (users[i][j] == 'a') {
				users[i][j] = 'L';
			}
		}
	}

	for (int i = 0; i < usersAmount; i++) {
		printf_s("%s \n", users[i]);
	}

	return 0;
}
*/
