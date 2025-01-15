	//main.c
	#include "menu.h"
	
	int main(){
		//Iniciamos el menú principal
		while(1) {
			if(main_menu()== -1) {
				//Salir del programa
				break;
			}
		}
		return 0;
	}
