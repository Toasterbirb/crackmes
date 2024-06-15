#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char random_char()
{
	if (rand() % 2 == 1)
		return (rand() % 26) + 'a';
	else
		return (rand() % 26) + 'A';
}

int main(void)
{
	srand(time(0));

	// Generate passwords with a length of 8
	const int pass_len = 8;
	char password[pass_len + 1];
	password[pass_len] = 0;

	password[0] = random_char();
	password[1] = random_char();
	password[2] = password[1];
	password[3] = password[0];

	password[4] = random_char();
	password[5] = random_char();
	password[6] = password[5];
	password[7] = password[4];

	printf("%s\n", password);

	return 0;
}
