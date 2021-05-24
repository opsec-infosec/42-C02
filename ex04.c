#include <unistd.h>
#include <stdio.h>
#include "../ex04/ft_str_is_lowercase.c"

int ft_str_is_lowercase(char *str);

int main(void) {
	
	char stringLower[] = "abcdefgz";
	char stringNonLower[] = "AaZz";
	char empty[] = "";

	printf("\nstringLower  = %s | stringNonLower  = %s \n\n",stringLower, stringNonLower);
	
	printf("Calling ft_str_is_lowercase(stringLower);\n");
	if (ft_str_is_lowercase(stringLower))
		printf("PASS Lowercase Test (1)\n");
	else
		printf("FAIL Lowercase Test (0)\n");

	printf("\nCalling ft_str_is_lowercase(stringNonLower);\n");
	if (ft_str_is_lowercase(stringNonLower))
		printf("FAIL Non Lowercase Test (1)\n");
	else
		printf("PASS Non Lowercase Test (0)\n");

	printf("\nCalling ft_str_is_lowercase(empty);\n");
	if (ft_str_is_lowercase(empty))
		printf("PASS Empty Strirg Test (1)\n");
	else
		printf("FAIL Empty String Test (0)\n");

	return (0);
}

