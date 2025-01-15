	//games.c
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h> // Para usar sleep en sistema UNIX
	#include "games.h"

	#define MAP_WIDTH 20
	#define MAP_HEIGHT 10


	void render_map(int player_x, int player_y){
		system("clear"); //Limpia la pantall en sistema UNIX
		for (int y=0; y < MAP_HEIGHT; y++){
			for(int x = 0; x < MAP_WIDTH; x++){
				if (x == player_x && y == player_y){
					printf("P"); // REPRESENTA AL JUGADOR
				}else {
					printf(".");  // RESPRESENTA EL VACÍO
				}
			}
			printf("\n");
		}
	}
	
	void start_game(){
		printf("\n=== INICIO DEL JUEGO ===\n");
		printf("Cargando el juego...\n");

		int score = 0;
		char command;
		int player_x = MAP_WIDTH / 2, player_y = MAP_HEIGHT / 2; // POSICION INICIAL DEL JUGADOR
		printf("Presione 'q' para salir del juego.\n");

		while(1){
			render_map(player_x, player_y);
			printf("\nJugador comando (w/a/s/d para mover, q para salir): ");
			if (scanf("%c", &command) != 1){
				printf("Entrada no válida. Intente de nuevo.\n");
				while(getchar() != '\n'); // Limpiar el buffer de entrada
				continue;
			}

		if (command == 'q'){
			printf("Saliendo del juego. Su puntuacion final es: %d\n", score);
			break;
		}else if (command =='w' && player_y > 0) {
			player_y--;
		}else if (command == 'a' && player_x > 0) {
			player_x--;
		}else if (command == 's' && player_y < MAP_HEIGHT -1){
			player_y ++;
		}else if (command == 'd' && player_x < MAP_WIDTH -1) {
			player_x ++;
		}else {
			continue;
		}

		score +=10; // Incrementa la puntuacion en cada moviemiento válido
		sleep(1);  // Pausa para hacer la animación más clara
		}
	printf("Gracias por jugar. Hasta la próxima!\n");
 }
