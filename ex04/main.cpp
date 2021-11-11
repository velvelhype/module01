# include <string>
# include <iostream>
# include <fstream>
# include <sstream>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        return 1;
    }
	std::stringstream	tempStream;
	std::string			fileName(argv[1]);
	std::ifstream		fileStream(fileName.c_str());
	tempStream << fileStream.rdbuf();
	std::string		fileContent = tempStream.str();

	if (fileContent.empty())
		return 0;
	std::string			oldStr(argv[2]);
	size_t				oldLen = oldStr.length();
	std::string			newStr(argv[3]);
	size_t				newLen = newStr.length();
    size_t				pos = 0;
	while ((pos = fileContent.find(oldStr, pos)) != std::string::npos)
	{
		fileContent.erase(pos, oldLen);
		fileContent.insert(pos, newStr);
		pos += newLen;
	}
	std::string	newFileName = fileName + ".replace";
	std::ofstream		newFileStream;
	newFileStream.open(newFileName.c_str());
	if (!(newFileStream.good()))
		return 1;
	newFileStream << fileContent;
	return (0);
}