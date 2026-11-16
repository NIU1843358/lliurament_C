#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float farenheit = temperatura * 9.0 / 5.0 + 32;

	printf("Temperatura: %d graus\n", temperatura);
	printf("Farenheit: %.1f graus\n", farenheit);

	return 0;
}
