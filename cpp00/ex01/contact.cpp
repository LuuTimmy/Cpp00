#include "contact.hpp"

std::string Contact::getFirstName() {
	return (first_name);
}

std::string Contact::getLastName() {
	return (last_name);
}

std::string Contact::getNickname() {
	return (nickname);
}

std::string Contact::verifIsEmpty(std::string name) {
	std::string line;

	while (1) {
		std::cout << name;
		std::getline(std::cin, line);
		if (line != "")
			break ;
		else
		    std::cout << "empty information" << std::endl;
	}
	return (line);
}

void Contact::add_info()
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

void Contact::printAll() {
	std::cout << "First Name - " + first_name << std::endl;
	std::cout << "Last Name - " + last_name << std::endl;
	std::cout << "Nickname - " + nickname << std::endl;
	std::cout << "Phone Number - " + phone_number << std::endl;
	std::cout << "Darknest Secret - " + darknest_secret << std::endl;
}