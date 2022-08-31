#include <iostream>
#include <fstream>
#include <string>


namespace NZ {

	template <typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}

	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

}
int main()
{
	NZ::print(122);
	NZ::print("lol");
	NZ::print('s');


}