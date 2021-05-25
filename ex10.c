#include <unistd.h>
#include <stdio.h>
#include "../ex10/ft_strlcpy.c"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void) {
	
	char string[] = "123456789";
	char ret[] = "*********";
	unsigned int n = 10;

	printf("\nsrc String = %s | dest String %s | size = %u \n",string,ret,n);
	printf("Calling ft_strlcpy(dest,src,%u);\n",n);
	printf("Return size = %u | src String = %s | dest String %s \n\n",ft_strlcpy(ret,string,n),string,ret);

	char ret1[] = "*********";
	n = 5;

	printf("\nsrc String = %s | dest String %s | size = %u \n",string,ret1,n);
	printf("Calling ft_strlcpy(dest,src,%u);\n",n);
	printf("Return size = %u | src String = %s | dest String %s \n\n",ft_strlcpy(ret1,string,n),string,ret1);

	return (0);
}
