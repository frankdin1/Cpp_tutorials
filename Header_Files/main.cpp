#include "add.h" // Insert contents of add.h at this point. Note use of double quotes here.
#include <iostream>

int add(int x, int y); //forward declaration using function prototype

int main()
{
	std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';

	std::cin.clear(); //reset any error flags
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore any characteristics in the input buffer until we find an enter character
	std::cin.get(); //get one more char from user
	return 0;
}