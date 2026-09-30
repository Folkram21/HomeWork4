#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_CTYPE, "RUS");

	int lampA, lampB;
	_Bool siren;

	printf("Введите значение для первой лампы -> ");
	scanf("%d", &lampA);
	printf("Введите значение для второй лампы -> ");
	scanf("%d", &lampB);

	if (lampA % 2 == 1 && lampB % 2 != 1) siren = 1;
	else if (lampA % 2 != 1 && lampB % 2 == 1) siren = 1;
	else siren = 0;

	if (siren) printf("Состояние сирены - > ON");
	else printf("Состояние сирены - > OFF");
}