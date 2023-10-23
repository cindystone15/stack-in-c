#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct{
	int* data;
	int size;
	int capacity;
}Stack; 

void init(Stack* s);
void destroy(Stack* s);
void push(Stack* s, int element);
int pop(Stack* s);
bool isEmpty(Stack *s);

#endif
