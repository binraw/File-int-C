#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
/*Fonction permettant de retourner quand la file est vide utiliser pour  gagner du temps sur le reste du code */
Bool is_empty_queue(void)
{
	if(first == NULL && last == NULL)
		return true;

	return false;


}


/*Fonction pour donner la taille de la File*/

int queue_length(void)
{
	return nb_elements;

}

/* Fonction pour donner La premiere donnee de la file */

int queue_first(void)
{
	if(is_empty_queue())
		exit(1);
	return first->value;
}

/* Fonction pour donner La derniere donnee de la file */


int queue_last(void)
{
	if(is_empty_queue())
		exit(1);
	
	return last->value;

}

/* Fonction pour donner l'ensemble des donnees presentes dans la file*/

void print_queue(void)
{

	if(is_empty_queue())
	{
		printf("Rien a afficher , La file est vide.\n");
		return;
	}

	QueueElement *temp = first;
	while (temp!= NULL )
	{
		printf("[%d]", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

/*Fonction pour rajouter une donner a la fin de la file */

void push_queue(int x)
{
	QueueElement *element;
	element = malloc(sizeof(*element));

	if(element == NULL)
	{
		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	element->value = x;
	element->next = NULL;

	if(is_empty_queue())
	{
		first = element;
		last = element;
	}
	else
	{
		last->next = element;
		last =element;


	
	}

	nb_elements++;
}

/* Fonction pour faire disparaitre la premiere donner de la file */

void pop_queue(void)
{
	if(is_empty_queue())
	{
		printf("Rien a retirer, la File est deja vide.\n");
		return;
	}
	QueueElement *temp = first;

	if(first == last)
	{
		first = NULL;
		last = NULL;
	}
	else
		first = first->next;

	free(temp);

	nb_elements--;
}
/*Fonction qui permet de supprimer toutes les donnees de la file*/

void clear_queue(void)
{
	if(is_empty_queue())
	{
		printf("Rien a nettoyer, la File est deja vide.\n");
		return;
	}

	while(!is_empty_queue())
	{
		pop_queue();
	}
}
