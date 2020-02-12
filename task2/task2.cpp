/*
 2. Напишите программу, которая вводит с клавиатуры один символ, и
 выводит DIGIT, этот символ является цифрой, CAPITAL - если 
 заглавной латинской буквой, LOWERCASE - если строчной, и выводит
 NON-ALPHANUMERIC в противном случае.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// или раскомментируйте это, если вам больше нравится iostream:
// #include <iostream>
// using namespace std;

int main() {
	char symb;
	
	scanf("%c", &symb);
	// или cin >> symb;

	if (symb >= '0' && symb <= '9') {
		printf("DIGIT\n");
		// или cout << "DIGIT\n";
	}
	return 0;
}