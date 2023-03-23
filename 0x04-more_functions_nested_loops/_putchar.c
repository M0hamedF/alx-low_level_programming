#include <unistd.h>
#include "main.h"

/**
 * putchar -writr characters
 *
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
