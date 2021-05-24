#include <unistd.h>
#include <stdio.h>
#include "../ex05/ft_str_is_uppercase.c"

int ft_str_is_uppercase(char *str);

int main(void) {
	
	char stringUpper[] = "ABCDEFGZ";
	char stringNonUpper[] = "AaZz";
	char empty[] = "";

	printf("\nstringUpper  = %s | stringNonUpper  = %s \n\n",stringUpper, stringNonUpper);
	
	printf("Calling ft_str_is_uppercase(stringUpper);\n");
	if (ft_str_is_uppercase(stringUpper))
		printf("PASS Upperrcase Test (1)\n");
	else
		printf("FAIL Upperrcase Test (0)\n");

	printf("\nCalling ft_str_is_uppercase(stringNonLower);\n");
	if (ft_str_is_uppercase(stringNonUpper))
		printf("FAIL Non Uppercase Test (1)\n");
	else
		printf("PASS Non Uppercase Test (0)\n");

	printf("\nCalling ft_str_is_uppercase(empty);\n");
	if (ft_str_is_uppercase(empty))
		printf("PASS Empty Strirg Test (1)\n");
	else
		printf("FAIL Empty String Test (0)\n");

	return (0);
}

