#include <iostream>
#include <fstream>
#include <string>


namespace NZ {

	//template print function
	template <typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}

	//text to write file.
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

	void readFromFile()
	{
		std::string fileContent;
		std::fstream openFile("MyFile.txt");
		while (std::getline(openFile, fileContent))
		{
			std::cout << "FileContent: " << fileContent << "\n";
		}
		openFile.close();

	}

}
int main()
{
	NZ::print(122);
	NZ::print("lol");
	NZ::print('s');

	NZ::WriteToFile("MyFile.txt");
	NZ::readFromFile();


}