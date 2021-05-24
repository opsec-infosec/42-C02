#include <unistd.h>
#include <stdio.h>
#include "../ex08/ft_strlowcase.c"

char *ft_strlowcase(char *str);

int main(void) {
	
	char stringUpperCase[] = "ABCDEFZ";
	char stringNumbers[] = "012349";
	char stringMix[] = "aB0cC1dD2eE3fF4zZ9";

	printf("\nstringUpperCase  = %s | stringNumbers = %s | stringMix = %s \n\n",stringUpperCase, stringNumbers, stringMix);
	
	printf("Calling ft_strupcase(\"%s\");\n",stringUpperCase);
	printf("Return Str = %s \n\n",ft_strlowcase(stringUpperCase));

	printf("Calling ft_strupcase(\"%s\");\n",stringNumbers);
	printf("Return Str = %s \n\n",ft_strlowcase(stringNumbers));

	printf("Calling ft_strupcase(\"%s\");\n",stringMix);
	printf("Return Str = %s \n\n",ft_strlowcase(stringMix));

	return (0);
}

