	//menu.c
	#include <stdio.h>
	#include "menu.h"
	#include "games.h"

	int main_menu() {
		int option;

		while(1){
			printf("\n==== PAC MENU ====\n");
			printf("1. Iniciar Juego\n");
			printf("2. Configuración\n");
			printf("3. Créditos\n");
			printf("4. Salir\n");
			printf("Selecione una oprción: ");
			scanf("%d", &option);
			if(option != 1){
				printf("Entrada no válida. Porfavor, intente de nuevo.\n");
				while(getchar() != '\n'); //Limpiar el buffer de entrada
				continue;
			}	
			switch(option) {
				case 1:
					start_game();
					break;
				case 2:
					open_settings();
					break;
				case 3:
					show_credits();
					break;
				case 4:
					printf("Salir del programa.\n");
					return -1;
				default:
					printf("Opcion no válida. Intente de nuevo.\n");
			}
			return 0; // mantiene el programa en ejecución
		}
	}

void open_settings() {
	printf("\n=== Configuracion ===\n");

}

void show_credits() {
	printf("\n=== CRÉditos ===\n");
}
