#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_DEPRECATE

int task1();
int task2();

int main() {
	// Кодировка

	setlocale(LC_ALL, ".UTF-8");

	task1();
	task2();
	
	return 0;
}

char task1() {
	char c;

	puts("Введите любую букву или цифру: ");

	scanf("%c", &c);

	switch (c)
	{

	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
		printf("Введена цифра\n");
		break;

	case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G':
	case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N':
	case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U':
	case 'V': case 'W': case 'X': case 'Y': case 'Z': case 'a': case 'b': 
	case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': 
	case 'j': case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': 
	case 'q': case 'r': case 's': case 't': case 'u':case 'v': case 'w': 
	case 'x': case 'y': case 'z':
		printf("Введена буква\n");
		break;

	default:
		printf("Неизвестный символ\n");

	}

	return '0';
}

float task2() {
	float x; float y; char c;

	printf("Введите два числа: ");

	scanf("%f %f", &x, &y);

	printf("Введите операцию (поддерживаются операции +, -, *, /, ^): ");

	scanf(" %c", &c);

	switch (c) {

	case '+':
		printf("Результат: %.3f\n", x + y);
		break;

	case '-':
		printf("Результат: %.3f\n", x - y);
		break;

	case '*':
		printf("Результат: %.3f\n", x * y);
		break;

	case '/':
		printf("Результат: %.3f\n", x / y);
		break;

	case '^':
		printf("Результат: %.3f\n", pow(x, y));
		break;

	default:
		printf("Введена неизвестная операция\n");
	}

	return 0.;
}
