#include <memory.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned char key_buffer[9];
	memset(key_buffer, 0, 9);

	unsigned char fkey[] = { 0x2d, 0x3f, 0x0c, 0x7b, 0x8e, 0x5a, 0x6f, 0x19, 0xd4, 0x70, 0xbd, 0xee, 0x34, 0x12, 0xac, 0x58, 0x96, 0xfa, 0xbd, 0xe1, 0xc3, 0x07, 0x48, 0xfa, 0x20, 0x5b, 0x6d, 0xc7, 0x9e, 0xf8, 0x12, 0x3a, 0x8b, 0x3f, 0x4c, 0x5d, 0x6e, 0x7a, 0x80, 0x19, 0x23, 0xc4, 0x56, 0x78, 0x90, 0x12, 0x34, 0x5f };
	unsigned char fkey_orig[] = { 0x2d, 0x3f, 0x0c, 0x7b, 0x8e, 0x5a, 0x6f, 0x19, 0xd4, 0x70, 0xbd, 0xee, 0x34, 0x12, 0xac, 0x58, 0x96, 0xfa, 0xbd, 0xe1, 0xc3, 0x07, 0x48, 0xfa, 0x20, 0x5b, 0x6d, 0xc7, 0x9e, 0xf8, 0x12, 0x3a, 0x8b, 0x3f, 0x4c, 0x5d, 0x6e, 0x7a, 0x80, 0x19, 0x23, 0xc4, 0x56, 0x78, 0x90, 0x12, 0x34, 0x5f };
	unsigned char key[] = { 0x00, 0x05, 0x54, 0x10, 0x36, 0xf6, 0xf1, 0x03, 0x17 };
	unsigned char skey[] = { 0x76, 0x21, 0x60, 0x53, 0x84, 0x9c, 0x62, 0x79 };

	for (int i = 0; i < 8; ++i)
	{
		fkey[i] = fkey[i] ^ key_buffer[i];
		key_buffer[i] = skey[i] ^ key[i + 1];
	}

	printf("%s\n", key_buffer);

	// Validate the key
	for (int i = 0; i < 8; ++i)
	{
		fkey_orig[i] = fkey_orig[i] ^ key_buffer[i];
		key_buffer[i] = key_buffer[i] ^ key[i + 1];

		if (key_buffer[i] != skey[i])
			printf("Invalid index: %d\n%d != %d\n", i, key_buffer[i], skey[i]);
	}

	return 0;
}
