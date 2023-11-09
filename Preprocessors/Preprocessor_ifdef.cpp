#include <iostream>
#include <limits>

#define PRINT_JOE

int main() {
#ifdef PRINT_JOE
	std::cout << "Joe\n"; //will be compiled since PRINT_JOE was defined
#endif 

#ifdef PRINT_BOB
	std::cout << "Bob\n"; //will be excluded since PRINT_BOB was not defined
#endif // PRINT_BOB

#ifndef PRINT_JOHN
	std::cout << "John\n"; //will be compiled since PRINT_JOHN is not defined
#endif // !PRINT_JOHN

#if defined(PRINT_JOE)
	std::cout << "Joe 2\n";
#endif

#if !defined(PRINT_JOHN)
	std::cout << "John 2\n";
#endif

	std::cout << "Joe\n";

#if 0 // Don't compile anything starting here
	std::cout << "Bob\n";
	std::cout << "Steve\n";
#endif // until this point

//To temporarily re-enable code that has been wrapped in an #if 0, you can change the #if 0 to #if 1:
#if 1 // always true, so the following code will be compiled
	std::cout << "John\n";
	/* Some
	 * multi-line
	 * comment here
	 */
	std::cout << "Jane\n";
#endif





	
	std::cin.clear(); //reset any error flags
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore any characteristics in the input buffer until we find an enter character
	std::cin.get(); //get one more char from user
	return 0;
}