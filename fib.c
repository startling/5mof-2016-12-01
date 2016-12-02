/* -*- compile-command: "gcc -Wall -g3 fib.c -o fib" -*- */
#include <stdio.h>


int main (int argc, char **argv)
{
	int a = 1;
	int b = 1;
	while (1) {
		printf("%d\n", a);
		int c = a + b;
		a = b;
		b = c;
	}
}
