#include <iostream>
#include <string> 

int promptingUser(); // function prototype

void main()
{
	promptingUser(); // calling function in main

}

int promptingUser()
{
	int usersAnswer; // creating variable of type int

	std::cout << "Enter in a number other than 5: " << std::endl;

	while (1) // while loop
	{
		std::cin >> usersAnswer; // loop blocking

		if (usersAnswer <= 4)
			std::cout << "go higher!" << std::endl;

		else if (usersAnswer <= 5) // logic statements
		{
			std::cout << "Congrats you are gullible!" << std::endl;
			break;
		}
		else
		{
			std::cout << "You inputed an invalid number" << std::endl;
			break;
		}
	}
	return usersAnswer; // returning 
}
