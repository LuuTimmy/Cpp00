#include "phonebook.hpp"

void	Phonebook::add_contact()
{
	if (olders >= 8)
		olders = 0;
	contactnb[olders].add_info();
	olders++;
}

void	Phonebook::print_info(std::string str)
{
	std::string temp;

	if (str.length() <= 10)
	{
		std::cout << str;
		for (int i = 0; i < (10 - str.length()); i++)
			std::cout << " ";
	}
	else
	{
		std::copy_n(str.begin(), 9, std::back_inserter(temp));
		std::cout << temp << ".";
	}
	std::cout << "|";
}

void Phonebook::display()
{
	int i = 0;
	std::string str;

	std::cout << "index     |First Name|Last Name |Nickname  |" << std::endl;
	while(i < 8)
	{
		std::cout << i + 1 << "         |";
		print_info(contactnb[i].first_name);
		print_info(contactnb[i].last_name);
		print_info(contactnb[i].nickname);
		std::cout << "\n";
		i++;
	}
	while (1) {
		std::cout << "wait index" << std::endl;
		std::stringstream ss;
		std::getline(std::cin, str); //verif number //pt faire un trim
		ss << str;
		if (ss >> i && !ss.rdbuf()->in_avail() && i > 0 && i <= 8) {
        	break ;
		}
		else {
			std::cout << "wrong index" << std::endl;
		}
		if (contactnb[i - 1].first_name == "")
			std::cout << "no information" << std::endl;
		else
			contactnb[i - 1].printAll();
	}
}