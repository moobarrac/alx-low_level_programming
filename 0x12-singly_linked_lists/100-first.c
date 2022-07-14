#include <stdio.h>
#include "lists.h"

void aesopica(void) __attribute__ ((constructor));
/**
*aesopica - prints string from Aesop's Fables before main ()
*/

void aesopica(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

/* The constructor attribute */
/* causes the function to be called automatically */
/*before execution enters main ().*/
