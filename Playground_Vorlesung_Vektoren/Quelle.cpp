#include <vector>
#include <iostream>

int main()
{
	std::vector<double> vd{ 2.01, 3.14 };

	vd.push_back(4.23);

	std::cout << vd.size() << std::endl;

	for (unsigned int i{0}; i < vd.size() ; ++i)
	{
		std::cout << vd[i] << std::endl;
	}

	std::vector<char> alphabet(26);

	for (unsigned int i{ 0 }; i < alphabet.size(); ++i)
	{
		std::cout << "\n\nAlphabet: \n" << alphabet[i] << std::endl;
	}


	return 0;
}