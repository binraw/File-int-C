#ifndef __QUEUE__H__
#define __QUEUE__H__

/*Creation du type booleen pour gagner du temps sur le code tres pratique a mettre en place */
typedef enum 
{
	false,
	true

}Bool;

/* Definition de notre file */
typedef struct QueueElement 

{
	int value;
	struct QueueElement *next;

}QueueElement, *Queue;



/*Gain de temps en creant des pointeurs  */



static QueueElement *first = NULL;

static QueueElement *last = NULL;

static int nb_elements = 0;

/*Prototype*/

Bool is_empty_queue(void);
int queue_length(void);
int queue_first(void);
int queue_last(void);
void print_queue(void);
void push_queue(int x);
void pop_queue(void);
void clear_queue(void);



#endif
