#include "pch.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>

using namespace std;

int main() {
	float amountRUB, pairUSDtoRUB = 65.5;
	int amountUSD;
	
	cout << "Enter USD amount: \n";
	cin >> amountUSD;
	
	amountRUB = pairUSDtoRUB * amountUSD;

	cout << "Your amount in RUB is: " << amountRUB << " RUB";

	return 0;
}

/* function

void showSomeStuff() {
	cout << "Some stuff \n";
}

int main() {
	int a;
	int b;
	int sum;

	showSomeStuff();
	showSomeStuff();
	showSomeStuff();
	showSomeStuff();

	cout << "Enter first number! \n";
	cin >> a;
	cout << "Enter second number! \n";
	cin >> b;

	sum = a + b;
	cout << "The sum is: " << sum;

	return 0;
}

*/

/* sum
int main() {
	int a;
	int b;
	int sum;

	cout << "Enter first number! \n";
	cin >> a;
	cout << "Enter second number! \n";
	cin >> b;

	sum = a + b;
	cout << "The sum is: " << sum;

	return 0;
}
*/
