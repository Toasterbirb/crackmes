#include <iostream>

int main(void)
{
	std::string v1_result = "n7t346";
	for (size_t i = 0; i < v1_result.size(); ++i)
		v1_result[i] -= i;


	std::string v2_result = "q77ivp5r";
	for (size_t i = 0; i < v2_result.size(); ++i)
		v2_result[i] -= '\x04';


	std::string v3_result = "9o,&Ji";
	std::string v3_str = "7m*$";
	for (size_t i = 0; i < v3_str.size(); ++i)
		v3_result[i] = v3_str[i] + '\x02';

	std::string v4_result = "a";
	v4_result[0] += 3;

	std::cout << v1_result << "\n";
	std::cout << v2_result << "\n";
	std::cout << v3_result << "\n";
	std::cout << v4_result << "\n";
}
