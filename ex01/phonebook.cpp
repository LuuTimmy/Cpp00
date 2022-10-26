#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>

class Contact
{
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darknest_secret;

	std::string verifIsEmpty(std::string name) {
		std::string line;

		while (1) {
			std::cout << name;
			std::getline(std::cin, line);
			if (line != "") //pt faire un trim
				break ;
			else
				std::cout << "empty information" << std::endl;
		}

		return (line);
	}

	void add_info()
	{
		std::string s;

		s = verifIsEmpty("First Name - ");
		first_name = s;
		s = verifIsEmpty("Last Name - ");
		last_name = s;
		s = verifIsEmpty("Nickname - ");
		nickname = s;
		s = verifIsEmpty("Phone Number - ");
		phone_number = s;
		s = verifIsEmpty("Darknest Secret - ");
		darknest_secret = s;
	}

	void printAll() {
		std::cout << "First Name - " + first_name << std::endl;
		std::cout << "Last Name - " + last_name << std::endl;
		std::cout << "Nickname - " + nickname << std::endl;
		std::cout << "Phone Number - " + phone_number << std::endl;
		std::cout << "Darknest Secret - " + darknest_secret << std::endl;
	}
};

class PhoneBook
{
public:
	PhoneBook() : olders(0) {};
	Contact contactnb[8];

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
			else
				std::cout << "wrong index" << std::endl;
		}
		if (contactnb[i - 1].first_name == "")
			std::cout << "no information" << std::endl;
		else
			contactnb[i - 1].printAll();
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