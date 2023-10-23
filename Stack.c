#include <stdio.h> 
#include <stdlib.h>

#include "Stack.h" 

#define INITAL_CAPACITY 10

void failure(Stack *s){
	if(s->data == NULL){ 
		printf("memory allocation failure");
		abort();
	}
}

void init(Stack* s){
	s->data = (int*)malloc(INITAL_CAPACITY* sizeof(int));
	failure(s);
	s->size =0;
	s->capacity = INITAL_CAPACITY;
}

bool isEmpty(Stack* s){
	return s->size == 0; 
}

void destroy(Stack* s){
	free(s->data);
}

void push(Stack* s, int element){
	if(s->size >= s->capacity ){ // to check if needed to be resized 
		s->capacity *=2; 
		s->data =(int*)realloc(s->data, s->capacity * sizeof(int));
		failure(s);
	}
	s->data[s->size++] = element;
}

int pop(Stack* s){
	if (isEmpty(s)){
		printf("stacks empty");
		abort();
	}
	return s->data[--s->size];
}


