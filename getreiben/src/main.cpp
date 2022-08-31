#include <iostream>



namespace NZ {

	template <typename T>
	void print(T)
	{
		std::cout << t << "\n";
	}


}
int main()
{
	NZ::print(122);
	NZ::print("lol");
	NZ::print('s');
}