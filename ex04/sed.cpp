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
	while (getline(inFile, buff))
	{
		int oldPos = buff.find(s1);
		if (oldPos < 0)
		{
			outFile << buff << std::endl;
			continue;
		}
		while(buff.find(s1, oldPos) != buff.npos)
		{
			std::string firstChunk = buff.substr(0, oldPos);
			std::string secondChunk = buff.substr(oldPos + s1.size(), buff.size());
			firstChunk.append(s2).append(secondChunk);
			oldPos = firstChunk.find(s1, oldPos + s2.size());
			buff = firstChunk;
			std::cout << firstChunk << std::endl;
		}
			outFile << buff << std::endl;
	}
	outFile.close();
	inFile.close();
	return(0);
}
