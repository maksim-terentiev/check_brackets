#ifndef __stack_h__
#define __stack_h__

#include <stdio.h>
#define STACK_SIZE 100000

static char stack[STACK_SIZE];
static int pointer=-1; // current head

char get_stack(); // no side effect
char pop_stack();
int put_stack(char ch);
int is_stack_empty();

#endif

