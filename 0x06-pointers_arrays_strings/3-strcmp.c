julien@ubuntu:~/0x06$ cat 3-main.c

#include "main.h"

#include <stdio.h>



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    char s1[] = "Hello";

	        char s2[] = "World!";



		    printf("%d\n", _strcmp(s1, s2));

		        printf("%d\n", _strcmp(s2, s1));

			    printf("%d\n", _strcmp(s1, s1));

			        return (0);

}

julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp

julien@ubuntu:~/0x06$ ./3-strcmp 

-15

15

0

julien@ubuntu:~/0x06$ 
