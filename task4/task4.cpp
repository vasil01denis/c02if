/* 
  4. �������� ���������, ������� ������ � ���������� ������� n ��� �
  ������� ��������� ��� n ���/����/���, ��������� ���������� �����, 
  ���� 1 <= n <= 100, ��� ERROR � ��������� ������ (�����������
  setlocale("ru", LC_ALL);).
*/
#define _CRT_SECURE_NO_WARNINGS

#include <clocale>
#include <iostream>

using namespace std;

int main(){
	int n;

	setlocale(LC_ALL, "ru");
	cin >> n;

    cout << "��� " << n << " ���\n";
	return 0;
}