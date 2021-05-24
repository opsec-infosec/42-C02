#include <unistd.h>
#include <stdio.h>
#include "../ex07/ft_strupcase.c"

char *ft_strupcase(char *str);

int main(void) {
	
	char stringLowerCase[] = "abcdefz";
	char stringNumbers[] = "012349";
	char stringMix[] = "aB0cC1dD2eE3fF4zZ9";

	printf("\nstringLowerCase  = %s | stringNumbers = %s | stringMix = %s \n\n",stringLowerCase, stringNumbers, stringMix);
	
	printf("Calling ft_strupcase(\"%s\");\n",stringLowerCase);
	printf("Return Str = %s \n\n",ft_strupcase(stringLowerCase));

	printf("Calling ft_strupcase(\"%s\");\n",stringNumbers);
	printf("Return Str = %s \n\n",ft_strupcase(stringNumbers));

	printf("Calling ft_strupcase(\"%s\");\n",stringMix);
	printf("Return Str = %s \n\n",ft_strupcase(stringMix));

	return (0);
}

