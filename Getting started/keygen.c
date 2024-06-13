#include <stdio.h>
#include <string.h>

int main(void)
{
	char password[] = "n`^m`o";
	const int password_len = strlen(password);

	for (int i = 0; i < password_len; ++i)
		password[i] += 5;

	printf("%s\n", password);

	return 0;
}
