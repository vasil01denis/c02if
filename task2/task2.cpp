/*
 2. �������� ���������, ������� ������ � ���������� ���� ������, �
 ������� DIGIT, ���� ������ �������� ������, CAPITAL - ���� 
 ��������� ��������� ������, LOWERCASE - ���� ��������, � �������
 NON-ALPHANUMERIC � ��������� ������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ��� ���������������� ���, ���� ��� ������ �������� iostream:
// #include <iostream>
// using namespace std;

int main() {
	char symb;
	
	scanf("%c", &symb);
	// ��� cin >> symb;

	if (symb >= '0' && symb <= '9') {
		printf("DIGIT\n");
		// ��� cout << "DIGIT\n";
	}
	return 0;
}