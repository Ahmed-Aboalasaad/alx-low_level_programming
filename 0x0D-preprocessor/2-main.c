#include <unistd.h>

int main(void)
{
	int i;
	char c = '\n';

	for (i = 0; __FILE__[i]; i++)
		write(1, &__FILE__[i], 1);
	write(1, &c, 1);

	return (0);
}
