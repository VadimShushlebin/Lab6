#include <stdio.h>
#include <locale.h>

int main()
{
	int N, sum;
	setlocale(LC_ALL, "RUS");
	printf("Введите число N (N<1000): ");
	scanf("%d", &N);
	int N1 = N / 100;
	int N2 = (N / 10) % 10;
	int N3 = N % 10;
	sum = N1 + N2 + N3;
	if (sum % 3 == 0) {
		printf("Сумма цифр числа %d кратна 3", N);
	}else {
		printf("Сумма цифр числа %d не кратна 3",N);
	}
}
