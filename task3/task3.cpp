/* 
 3. Введите с клавиатуры год в интервале от 1582 до 2200, выведите LEAP,
 если он високосный, или NORMAL, если нет. Выведите ERROR, если 
 номер года больше 2200 или меньше 1582. (К примеру, 2019 год - не 
 високосный, 2020 - високосный, 1900 и 2100 - не високосные, 2000 - 
 високосный.)
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