#include "sed.hpp"

int	sed(std::string& fileName, std::string s1, std::string s2)
{
	std::ifstream	inFile;
	std::string		buff;
	std::ofstream	outFile(fileName + ".replace");

	inFile.open(fileName);
	if (inFile.fail() || outFile.fail())
		return (std::cout << "Error opening the file." << std::endl, 1);
	if (s1.empty() || s2.empty())
		return (1);
	if (buff.find(s1) < 0)
		std::cout << "string <" << s1 << "> not present in file : " << fileName << std::endl;
	while (getline(inFile, buff))
	{
		int oldPos = buff.find(s1);
		if (oldPos < 0)
		{
			outFile << buff << std::endl;
			continue;
		}
		while(buff.find(s1, oldPos))
		{

			buff = buff.substr(0, oldPos) + s2;
			std::string secondChunk = buff.substr(oldPos + s1.size(), buff.find(s1));
			buff.append(s2).append(secondChunk);
			outFile << buff << std::endl;
			std::cout << buff << std::endl;
		}
	}
	outFile.close();
	inFile.close();
	return(0);
}
