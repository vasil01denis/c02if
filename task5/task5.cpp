/* 
 5. (switch/case) ¬ведите с клавиатуры число n и выведите англий-
 ское название соответствующей цифры от 0 до 9 заглавными буквами
 (ZERO, ONE, ...NINE), либо ERROR, если число меньше 0 или больше 9.
 ћассивы не использовать, if не использовать.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int input;
	scanf("%d", &input);
	switch(input){
		case 0:printf("Zero\n");
			break;
		case 1:printf("One\n");
			break;
		case 2:printf("Two\n");
			break;
		case 3:printf("Three\n");
			break;
		case 4:printf("Four\n");
			break;
		case 5:printf("Five\n");
			break;
		case 6:printf("Six\n");
			break;
		case 7:printf("Seven\n");
			break;
		case 8:printf("Eight\n");
			break;
		case 9:printf("Nine\n");
			break;
		default:printf("Error\n");
	}
	system("pause");
}
