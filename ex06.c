#include <unistd.h>
#include <stdio.h>
#include "../ex06/ft_str_is_printable.c"

int ft_str_is_printable(char *str);

int main(void) {
	
	char stringPrintable[] = {'A','z','0','9','~'};
	char stringNonPrintable[] = {0x07,0x01,0x37};
	char empty[] = "";

	printf("\nstringPrintable  = %s \n\n",stringPrintable);
	
	printf("Calling ft_str_is_printable(stringPrintable);\n");
	if (ft_str_is_printable(stringPrintable))
		printf("PASS Printable String Test (1)\n");
	else
		printf("FAIL Printable String Test (0)\n");

	printf("\nCalling ft_str_is_printable(stringNonPrintable);\n");
	if (ft_str_is_printable(stringNonPrintable))
		printf("FAIL Non Printable String Test (1)\n");
	else
		printf("PASS Non Printable String Test (0)\n");

	printf("\nCalling ft_str_is_printable(empty);\n");
	if (ft_str_is_printable(empty))
		printf("PASS Empty Strirg Test (1)\n");
	else
		printf("FAIL Empty String Test (0)\n");

	return (0);
}

