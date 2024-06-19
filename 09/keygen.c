#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

void decrypt_string(char* string, const char* key)
{
	const size_t string_len = strlen(string);
	for (size_t i = 0; i < string_len; ++i)
		string[i] = string[i] ^ key[(uint)i & 3];
}

int main(void)
{
	const char correct_output[] = "Correct Password!";

	// Key extracted with ltrace
	const int encrypted_buffer_size = 30;
	char encrypted_buffer[encrypted_buffer_size];
	snprintf(encrypted_buffer, encrypted_buffer_size, "%s", "v\\J@PPL\022eRKAB\\JV\024");
	const int encrypted_buffer_len = strlen(encrypted_buffer);

	const int key_buffer_len = 30;
	char key_buffer[key_buffer_len];
	char encrypted_buffer_copy[encrypted_buffer_size];

	// Use brute force
	for (int i = 1000; i < 10000; ++i)
	{
		snprintf(key_buffer, key_buffer_len, "%d", i);

		// Create a copy of the encrypted_buffer array
		memcpy(encrypted_buffer_copy, encrypted_buffer, encrypted_buffer_size);
		decrypt_string(encrypted_buffer_copy, key_buffer);

		// Check if the result is correct
		if (!strcmp(encrypted_buffer_copy, correct_output))
		{
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}
