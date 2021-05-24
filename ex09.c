#include <unistd.h>
#include <stdio.h>
#include "../ex09/ft_strcapitalize.c"

char *ft_strcapitalize(char *str);

int main(void) {
	
	char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+um";
	char string1[] = "sALUT, cOMMENT tU vAS ? 42MOTS qUARANTE-dEUX; cINQUANTE+eT+uM";
	char string2[] = "42-is great+awesome!";

	printf("\nString = %s  \n",string);
	printf("Calling ft_strcapitalize(string);\n");
	printf("Return String = %s \n\n",ft_strcapitalize(string));
	
	printf("\nString1 = %s  \n",string1);
	printf("Calling ft_strcapitalize(string1);\n");
	printf("Return String = %s \n\n",ft_strcapitalize(string1));
	
	printf("\nString2 = %s  \n",string2);
	printf("Calling ft_strcapitalize(string2);\n");
	printf("Return String = %s \n\n",ft_strcapitalize(string2));

	return (0);
}

