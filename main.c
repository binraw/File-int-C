#include <stdio.h>
#include "queue.h"


int main(void)
{
	/* Appel de la file vide*/
	printf("Taille de la File : %d\n", queue_length());
	print_queue();
	/*Ajout de valeur dans la file */
	push_queue(101);
	push_queue(111);
	push_queue(200);
	push_queue(201);
	push_queue(211);
	printf("Taille de la File : %d\n", queue_length());
	print_queue();

	/*Suppression de la premiere valeur de la file*/
	pop_queue();
	printf("Taille de la File : %d\n", queue_length());
	print_queue();
	/*Ajout d'une valeur a la file*/
	push_queue(300);
	print_queue();
	/*Suppression de toutes les valeurs de la file */
	clear_queue();
	print_queue();
	
	return 0;


}
