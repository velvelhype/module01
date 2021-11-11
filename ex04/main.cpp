# include <string>
# include <iostream>
# include <fstream>
# include <sstream>

int main(int argc, char **argv)
{
	// if ((ret = args_checker(fileName, oldStr, newStr, fileStream)))		// return (ret);
    if(argc != 4)
    {
        return 1;
    }
	std::stringstream	tempStream;
	std::string			fileName(argv[1]);
	std::ifstream		fileStream(fileName.c_str());
	tempStream << fileStream.rdbuf();
	std::string		fileContent = tempStream.str();

	// if (fileContent.empty())
		// return (error_manager(5, "source file is empty, or you selected a directory"));
	std::string			oldStr(argv[2]);
	size_t				oldLen = oldStr.length();
	std::string			newStr(argv[3]);
	size_t				newLen = newStr.length();
	
    size_t				pos = 0;
	while ((pos = fileContent.find(oldStr, pos)) != std::string::npos)
	{
		fileContent.replace(pos, oldLen, newStr);
		pos += newLen;
	}
	std::string	newFileName = fileName + ".replace";
	std::ofstream		newFileStream;
	newFileStream.open(newFileName.c_str());
	// if (!(newFileStream.good()))
		// return(error_manager(4, "a problem occured while accessing the .replace file."));
	newFileStream << fileContent;
	return (0);
}