#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string output;

	for (int i = 1; i < argc; i++)
	{
		std::string tmpS(argv[i]);
		for (int i = 0; tmpS[i]; i++)
			tmpS[i] = std::toupper(tmpS[i]);
		output += tmpS;
	}
	if (output.empty()) 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		std::cout << output << std::endl;
	return (0);
}