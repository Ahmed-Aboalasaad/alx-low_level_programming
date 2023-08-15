#include <stdio.h>

int main(void)
{
	if (__FILE__ != NULL)
		printf("%s\n", __FILE__);

	return (0);
}
