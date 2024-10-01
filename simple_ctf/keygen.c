#include <stdio.h>

int unhash(int *input,int *output,long len)
{
	long i;

	for (i = 0; i != len; i = i + 1) {
		output[i] = (input[i] + 10) / 100;
	}
	return 0;
}

int main()
{
	int hashed_flag[16];
	hashed_flag[0] = 0x1a22;
	hashed_flag[1] = 0x20c7;
	hashed_flag[2] = 0x1b50;
	hashed_flag[3] = 0x2515;
	hashed_flag[4] = 0x29c6;
	hashed_flag[5] = 0x28ff;
	hashed_flag[6] = 0x2d4c;
	hashed_flag[7] = 0x2d4d;
	hashed_flag[8] = 0x2646;
	hashed_flag[9] = 0x2f43;
	hashed_flag[10] = 0x2f44;
	hashed_flag[0xb] = 0x2f45;
	hashed_flag[0xc] = 0xc82;
	hashed_flag[0xd] = 0x16ab;
	hashed_flag[0xe] = 0x1a94;

	int unhashed_flag[16];
	unhash(hashed_flag, unhashed_flag, 16);

	for (int i = 0; i < 16; ++i)
		printf("%c", unhashed_flag[i]);
	printf("\n");
}
