/* 
 3. ������� � ���������� ��� � ��������� �� 1582 �� 2200, �������� LEAP,
 ���� �� ����������, ��� NORMAL, ���� ���. �������� ERROR, ���� 
 ����� ���� ������ 2200 ��� ������ 1582. (� �������, 2019 ��� - �� 
 ����������, 2020 - ����������, 1900 � 2100 - �� ����������, 2000 - 
 ����������.)
*/
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
// 1582..2200

int main(){
	int y;
	scanf("%d", &y);
	if(y < 1582) printf("Error\n");
	else if(y > 2200) printf("Error\n");
	else if(y%4 == 0) printf("Lean\n");
	else printf("Normal\n");
	system("pause");
}