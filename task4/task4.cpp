/* 
  4. Напишите программу, которая вводит с клавиатуры возраст n лет и
  выводит сообщение ВАМ n ЛЕТ/ГОДА/ГОД, используя правильное слово, 
  если 1 <= n <= 100, или ERROR в противном случае (используйте
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

    cout << "ВАМ " << n << " ЛЕТ\n";
	return 0;
}