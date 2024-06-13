#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));

	const int key_len = 11;
	char key[key_len];

	for (int i = 0; i < key_len - 1; ++i)
		key[i] = (rand() % 10) + 48;

	// Set the two required numbers
	key[0] = '1';
	key[4] = '9';

	// Set the null terminator
	key[key_len - 1] = 0;

	printf("%s\n", key);

	return 0;
}
