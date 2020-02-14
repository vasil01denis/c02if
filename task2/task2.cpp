/*
 2. Напишите программу, которая вводит с клавиатуры один символ, и
 выводит DIGIT, этот символ является цифрой, CAPITAL - если 
 заглавной латинской буквой, LOWERCASE - если строчной, и выводит
 NON-ALPHANUMERIC в противном случае.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// или раскомментируйте это, если вам больше нравится iostream:
// #include <iostream>
// using namespace std;
// ASCII!!

int main() {
	char symb;	
	scanf("%c", &symb);
	if(symb>=48 && symb<=57){
		printf("DIGIT\n"); //5_48..57
	} else if(symb>=65 && symb<=90){
		printf("CAPITAL\n"); //L_65..90
	} else if(symb>=97 && symb<=122){
		printf("LOWERCASE\n"); //e_97..122
	} else
		printf("NON-ALPHANUMERIC\n"); //other
	system("pause");
}