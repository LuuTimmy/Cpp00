#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
	Phonebook phonebook;
	std::string cmd;

	while (1)
	{
		std::cout << "wait command" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "SEARCH") {
			phonebook.display();
		}
		else if (cmd == "EXIT")
			exit(0);
		else
			std::cout << "invalid command" << std::endl;
	}
}