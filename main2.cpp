#include <string.h>
#include <iostream>

class Contact
{
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darknest_secret;

	void add_info()
	{
		std::cout << "First Name - ";
		std::getline(std::cin, first_name);
		if (first_name == "")
			std::cout << "pute";
		std::cout << "Last Name - ";
		std::getline(std::cin, last_name);
		std::cout << "Nickname - ";
		std::getline(std::cin, nickname);
		std::cout << "Phone Number - ";
		std::getline(std::cin, phone_number);
		std::cout << "Darknest Secret - ";
		std::getline(std::cin, darknest_secret);
	}
};

class PhoneBook
{
public:
	Contact contactnb[8];
	PhoneBook() : olders(0) {};

	void	add_contact()
	{
		if (olders >= 8)
			olders = 0;
		contactnb[olders].add_info();
		olders++;
	}

	void print_info(std::string str)
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

	void display()
	{
		int i = 0;

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
	}

private:
	int olders;	
};

int main()
{
	PhoneBook phonebook;
	std::string cmd;

	while (1)
	{
		std::cout << "wait command" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			phonebook.add_contact();
		}
		else if (cmd == "SEARCH")
		{
			phonebook.display();
		}
		else if (cmd == "EXIT")
			exit(0);
		else
			std::cout << "invalid command" << std::endl;
	}
}