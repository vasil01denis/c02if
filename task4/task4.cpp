/* 
  4. �������� ���������, ������� ������ � ���������� ������� n ��� �
  ������� ��������� ��� n ���/����/���, ��������� ���������� �����, 
  ���� 1 <= n <= 100, ��� ERROR � ��������� ������ (�����������
  setlocale("ru", LC_ALL);).
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// 1..100 ���
// ��� n ���/����/���

int main(){
	int n;
	setlocale(LC_ALL, "Rus");
	scanf("%d", &n);
	if(n<1) printf("ERROR\n");
	else if(n>100) printf("ERROR\n");
	else if(n%10 == 1 && n != 11) printf("��� %d ���\n", n);
	else if(n>=5 && n<=20) printf("��� %d ���\n", n);
	else if(n%10>=5) printf("��� %d ���\n", n);
	else printf("��� %d ����\n", n);
	system("pause");
}