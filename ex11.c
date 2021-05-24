#include <unistd.h>
#include <stdio.h>
#include "../ex11/ft_putstr_non_printable.c"

void ft_putstr_non_printable(char *str);

int main(void) {
	
	char string[] = {'c','o','u','c','o','u',0x0a,'t','u',0x20,'v','a','s',0x20,'b','i','e','n',0x20,'?'};
	
	printf("\nString = %s \n",string);
	printf("Calling ft_putstr_non_printable(string);\n");
	ft_putstr_non_printable(string);
	printf("String = %s \n\n",string);

	return (0);
}
