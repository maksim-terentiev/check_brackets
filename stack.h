#ifndef __stack_h__
#define __stack_h__

#include <stdio.h>
#include <limits.h> // for INT_MAX
#define STACK_SIZE INT_MAX

static char stack[STACK_SIZE];
static int pointer=-1; // current head

char get_stack(); // no side effect
char pop_stack();
int put_stack(char ch);

#endif

