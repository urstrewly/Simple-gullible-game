#include <iostream>
#include <string> 

int promptingUser();

void main()
{
	promptingUser();

}

int promptingUser()
{
	int usersAnswer;

	std::cout << "Enter in a number other than 5: " << std::endl;

	while (1)
	{
		std::cin >> usersAnswer;

		if (usersAnswer <= 4)
			std::cout << "go higher!" << std::endl;

		else if (usersAnswer <= 5)
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
	return usersAnswer;
}