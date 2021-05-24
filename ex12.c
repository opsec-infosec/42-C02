#include <unistd.h>
#include <stdio.h>
#include "../ex12/ft_print_memory.c"

void *ft_print_memory(void *addr, unsigned int size);

int main(void) {

	char *test = "THIS IS MEMORY TEST -- Abu Dhabi 42 is Awesome, \t\e\a\a\a But I don't like Normanette!!! ";

	ft_print_memory(&test, sizeof(test));

	return (0);
}
