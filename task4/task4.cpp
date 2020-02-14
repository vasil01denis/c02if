/* 
  4. Напишите программу, которая вводит с клавиатуры возраст n лет и
  выводит сообщение ВАМ n ЛЕТ/ГОДА/ГОД, используя правильное слово, 
  если 1 <= n <= 100, или ERROR в противном случае (используйте
  setlocale("ru", LC_ALL);).
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// 1..100 лет
// Вам n лет/года/год

int main(){
	int n;
	setlocale(LC_ALL, "Rus");
	scanf("%d", &n);
	if(n<1) printf("ERROR\n");
	else if(n>100) printf("ERROR\n");
	else if(n%10 == 1 && n != 11) printf("Вам %d год\n", n);
	else if(n>=5 && n<=20) printf("Вам %d лет\n", n);
	else if(n%10>=5) printf("Вам %d лет\n", n);
	else printf("Вам %d года\n", n);
	system("pause");
}