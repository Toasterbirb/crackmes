#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));

	int random_number = rand();

	// Toggle off the third and the fifth bit
	random_number = random_number & ~(1 << 2);
	random_number = random_number & ~(1 << 4);

	// Toggle on bits 0, 1 and 3
	random_number |= 1 << 0;
	random_number |= 2 << 0;
	random_number |= 3 << 0;

	printf("%d\n", random_number);

	return 0;
}
