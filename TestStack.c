#include <stdio.h>
#include "Stack.h" 

int main(void){
	Stack s; 
	init(&s);

	for(int i = 0; i < 10; i++){
		push(&s, i);
	}
	while (!isEmpty(&s)){
		int element = pop(&s);
		printf("popped: %d\n", element);
	}
	
	destroy(&s);
	
	
	return 0;
}
