#include "stack.h"

int put_stack(char ch){
	if(++pointer >= STACK_SIZE){
		fprintf(stderr,"Stack error : stack overflow\n");
		return 0;
	}
	stack[pointer]=ch;
	return 1;
}

char get_stack(){
	if(pointer>=0)
		return stack[pointer];
	else{
		fprintf(stderr,"Stack error : stack is empty\n");
		return '\0';
	}
}

char pop_stack(){
	if(pointer>=0)
		return stack[pointer--];
	else{
		fprintf(stderr,"Stack error : stack is empty\n");
		return '\0';
	}
}

int is_stack_empty(){
	return pointer<0;
}
