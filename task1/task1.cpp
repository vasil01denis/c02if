/* 
 1. �������� ���������, ������� ������ � ���������� ���� ����� �����,
    � ������� POL, ���� ��� ������������, OTR � ���� ������������, �
    NUL, ���� ��� ����.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n > 0){
		printf("POL\n");
	} else if(n == 0){
		printf("NUL\n");
	} else
		printf("OTR\n");
	system("pause");
}