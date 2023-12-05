#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main() {
int sprPIN, i = 0;
int PIN = 1234;
float stan = 1000.00;
int opcja;
bool wyloguj = false;

printf("zaloguj sie wprowadzajac 4-cyfrowy pin\n");
while (i <= 2 )
{
	wyloguj = false;
	scanf("%d", &sprPIN);
	if (sprPIN == PIN) {
		printf("zalogowano pomyslnie\n");
		while (!wyloguj) {
			printf("Menu\n 1 - wplac pieniadze\n 2 - wyplac pieniadze\n 3 - wyswietl stan konta\n 0 - wyloguj\n");
			scanf("%d", &opcja);
			switch (opcja) 
			{
				case 0:
					wyloguj = true;
					i = 0;
					printf("pomyslnie wylogowano\n");
					printf("zaloguj sie wprowadzajac 4-cyfrowy pin\n");
					break;
			
				case 1:
					printf("podaj kwote ktora chcesz wplacic\n");
					float wplata; 
					scanf("%f", &wplata);
					stan = stan + wplata;
					printf("po wplacie na twoim koncie znajduje sie %.2f zlotych\n", stan);
					printf("DOMYSLNY POWROT DO MENU\n");
			       		break;

				case 2:
					printf("ile pieniedzy chcesz wyplacic?\n");
					float wyplata;
					scanf("%f", &wyplata);
					while (wyplata > stan) {
						printf("nie mozesz wyplacic tyle pieniedzy\n");
						printf("DOMYSLNY POWROT DO MENU\n");
						break;
					}
					while (wyplata <= stan) {
						stan = stan - wyplata;
						printf("Po wyplacie stan twojego konta wynosi %.2f zlotych\n", stan);
						printf("DOMYSLNY POWROT DO MENU\n");
					}
					break;
				case 3: 
					printf("stan twojego konta wynosi %.2f zlotych\n", stan);
					printf("DOMYSLNY POWROT DO MENU\n");
					break;
				default:
					printf("wybrano nieistniejaca opcje\n");
					printf("DOMYSLNY POWROT DO MENU\n");
					break;


			}

			}
		}
	
	else {
		if (i == 2) {
			printf("3 razo podano niepoprawyny pin, zablokowano mozliwosc logowania sie\n");
		return 0;
		}
		else {
			printf("pin niepoprawny, sprobuj jeszcze raz\n");
			i+=1;
		}
	}
}


}
