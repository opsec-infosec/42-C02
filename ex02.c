#include <unistd.h>
#include <stdio.h>
#include "../ex02/ft_str_is_alpha.c"

int ft_str_is_alpha(char *str);

int main(void) {
	
	char stringAlpha[] = "AabBcCdDeEfFgGzZ";
	char stringNonAlpha[] = "AaZzbCdEf34@#";
	char empty[] = "";

	printf("\nstringAlph  = %s | stringNonAlpha  = %s \n\n",stringAlpha, stringNonAlpha);
	
	printf("Calling ft_str_is_alpha(stringAlpha);\n");
	if (ft_str_is_alpha(stringAlpha))
		printf("PASS Alpha Test (1)\n");
	else
		printf("FAIL Alpha Test (0)\n");

	printf("\nCalling ft_str_is_alpha(stringNonAlpha);\n");
	if (ft_str_is_alpha(stringNonAlpha))
		printf("FAIL Non Alpha Test (1)\n");
	else
		printf("PASS Non Alpha Test (0)\n");

	printf("\nCalling ft_str_is_alpha(empty);\n");
	if (ft_str_is_alpha(empty))
		printf("PASS Empty Strirg Test (1)\n");
	else
		printf("FAIL Empty String Test (0)\n");

	return (0);
}

