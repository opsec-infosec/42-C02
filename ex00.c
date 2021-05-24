#include <unistd.h>
#include <stdio.h>
#include "../ex00/ft_strcpy.c"

char* ft_strcpy(char *dest, char *src);

int main(void) {
	
	char src_string[] = "Test_Src_String";
	char dest_string[] = "Test_Dest_String";
	char ret_string[] = "Return_String";

	printf("return = %s | dest = %s | src = %s\n",ret_string,dest_string,src_string);
	printf("Calling return =  ft_strcpy(dest,src);\n");
	printf("return = %s | dest = %s | src = %s\n",ft_strcpy(dest_string,src_string),dest_string,src_string);
    return (0);
}

