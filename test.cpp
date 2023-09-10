#include <iostream>

int main()
{
	std::string word = "hamza";
	try
	{
		std::cout << word.at(5) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(...)
	{
		
	}
	return (0);
}