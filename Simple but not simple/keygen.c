#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char encrypted_password[] = "v`fw`qUdvvrjwa476\0";
	int pass_len = strlen(encrypted_password);

	for (int i = 0; i < pass_len; ++i)
		encrypted_password[i] ^= 5;

	printf("%s\n", encrypted_password);

	return 0;
}
