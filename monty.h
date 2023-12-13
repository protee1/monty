#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack
 * @next: points to the next element of the stack(or queue)
 *
 * Description: doubly linked list node structure
 * for stack,queues, LIFO,FIFO
 * Writen By Protee
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

typedef struct bus_s
{
	char *arg;
	char *file;
	char *content;
	int lifi;
} bus_t;

extern bus_t bus;

void f_stack(stack_t **head, unsigned int counter);
void free_stack(stack_t *head);

#endif
