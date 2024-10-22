/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:49:22 by relamine          #+#    #+#             */
/*   Updated: 2024/10/22 23:34:57 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	this->index = 0;
	for (int i = 0; i < 8; i++)
	{
		contact[i].setFirstName("");
		contact[i].setLastName("");
		contact[i].setNickName("");
		contact[i].setPhoneNumber("");
		contact[i].setDarkestSecret("");
	}
};

int isonly_whitespace(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isspace(str[i]))
			return (0);
	}
	return (1);
}

std::string PhoneBook::set_attribute(std::string attribute)
{
	std::string value;

	while (true)
	{
		std::cout << "Enter " << attribute << ": ";
		std::getline(std::cin, value);
		if(std::cin.eof())
			exit(0);
		if (value.empty() || isonly_whitespace(value))
			continue;
		return (value);
	}
}

void PhoneBook::Fill_Contact(int index)
{
	Contact _Contact;

	_Contact.setFirstName(set_attribute("FirstName"));
	_Contact.setLastName(set_attribute("LastName"));
	_Contact.setNickName(set_attribute("NickName"));
	_Contact.setPhoneNumber(set_attribute("PhoneNumber"));
	_Contact.setDarkestSecret(set_attribute("DarkestSecret"));

	this->contact[index] = _Contact;
	this->index++;
};

void PhoneBook::Add_Contact()
{
	Fill_Contact(this->index);
	if (this->index > 7)
		this->index = 0;
};

std::string sub(std::string str)
{
	if(str.length() <= 10)
		return str;
	return (str.substr(0, 9) + ".");
}

void PhoneBook::Display_ContactInfo(size_t i)
{
	std::cout <<"|" << std::setw(10) << i << "|" << std::setw(10)<< sub(contact[i].getFirstName()) << "|" <<std::setw(10)
	<< sub(contact[i].getLastName()) << "|" << std::setw(10) << sub(contact[i].getNickName()) << "|" << std::endl;
}

void PhoneBook::Display_InfoByIndex()
{
	std::string str;
	int			index;

	index = 0;
	while (true)
	{
		std::cout << "Search by Index : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if(str.empty() || !isdigit(str[0]))
			continue;
		index = atoi(str.c_str());
		std::cout << index << std::endl;
		if (index > 7 || (index < 8 && str.length() > 1) || contact[index].getFirstName().empty())
			continue ;
		std::cout << "First Name: " << contact[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << contact[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contact[index].getNickName() << std::endl;
		std::cout << "Phone Number: " << contact[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contact[index].getDarkestSecret() << std::endl;
		break ;
	}
}

void PhoneBook::Search()
{
	if (contact[0].getFirstName().empty())
	{
		std::cout << "contact is empty" << std::endl;
		return ;		
	}
	std::cout << "|  Index   |" << "First Name|" << " Last Name|" << " Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << "\n";
	for (size_t i = 0; i < 8; i++)
	{
		if (contact[i].getFirstName().empty())
			break ;
		Display_ContactInfo(i);
	}
	Display_InfoByIndex();
}
