#include <iostream>

std::string decode_pin(std::string pin)
{
	int tmp_char;
	for (int i = 0; i < 4; ++i) {
		tmp_char = pin[i] - 53;
		if (tmp_char < 0) {
			tmp_char = pin[i] - 43;
		}

		pin[i] = (char)tmp_char + '0';
	}

	return pin;
}

int main(void)
{
	// The number 8446 was stored in the binary
	// and seemed to be decoded and compared against
	// the user input

	std::cout << decode_pin("8446") << "\n";
	return 0;
}
