#include <unistd.h>
#include <stdio.h>
#include "../ex01/ft_strncpy.c"

char* ft_strncpy(char *dest, char *src, unsigned int n);

int main(void) {
	
	char src_string[] = "Source";
	char dest_string[] = "Destination";
	char *ret_string = "Return";
	unsigned int len  = 7;

	printf("return = %s | dest = %s | src = %s | n = %u\n",ret_string,dest_string,src_string,len);
	printf("Calling return =  ft_strncpy(dest_string,src_string,n);\n");
	printf("return = %s | dest = %s | src = %s | n = %u\n", ft_strncpy(dest_string,src_string,len),dest_string,src_string,len);

	return (0);
}

