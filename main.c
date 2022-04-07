#include <stdio.h>
#include "stack.h"

char sym_bracket(char ch){
	switch(ch){
	case '(':
		return ')';
		break;
	case ')':
		return '(';
		break;
	case '[':
		return ']';
		break;
	case ']':
		return '[';
		break;
	case '{':
		return '}';
		break;
	case '}':
		return '{';
		break;
	default:
		return '\0';
	}
}

int main(){
	char ch;

	int test=1;
	int r; //for checking stack functions
	while(scanf("%c", &ch)==1){
		if(ch=='(' || ch=='{' || ch=='['){
			r=put_stack(ch);
			if(r==0) return 1;
		}
		else if(ch==')' || ch=='}' || ch==']'){
			if(sym_bracket(pop_stack())!=ch){
				test=0;
				break;
			}
		}
	}

	if(test)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
