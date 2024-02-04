#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main (void)
{
	int segundos = 0, minutos = 0, horas = 0;

		while (1 == 1) {
			Sleep (1000);
			segundos = segundos + 10 ;
			system("cls");

			if (segundos > 59) {
				minutos++;
				segundos = 0;
			}
			if (minutos > 59) {
				horas++;
				minutos = 0;
			}
			if (horas > 23) {
				horas = 0;
			}
			printf("%d: %d: %d", horas, minutos, segundos);
		}

	return 0;
} 