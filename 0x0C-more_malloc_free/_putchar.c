#include <unistd.h>
#include "main.h"

/**
 * putchar -write characters
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
