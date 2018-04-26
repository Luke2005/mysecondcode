//This code is a rectangle area calculating machine

#include <iostream>
         
int main()
{
	//declaring variables
	int area;
	int base1,high, base2;

        high=4;
 	base2 = 8;
	base1 = 6;

	//read in variable
	std::cout << "what is your base1:";
	std::cin >> base1;
        
	std::cout << "what is your base2:";
	std::cin >> base2;

	std::cout << "what is your high:";
	std::cin >> high;

	//calculating area...
	area =( base1 + base2) * high / 2;
	std::cout << "+++++++++++++++++++++++" << "\n";
	std::cout << "Your trapezoid area is:" << area << "\n";
	std::cout << "+++++++++++++++++++++++" << "\n";
}
