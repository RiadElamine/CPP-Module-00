/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:03:59 by relamine          #+#    #+#             */
/*   Updated: 2024/10/22 23:37:13 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int main ()
{
	PhoneBook phoneBook;

	std::string input;
	while(true)
	{
		std::cout << "enter a command: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if(input == "ADD")
		{
			phoneBook.Add_Contact();
		}
		else if (input == "SEARCH")
		{
			phoneBook.Search();
		}
		else if(input == "EXIT")
		{
			std::cout << "EXIT\n"; 
			break;
		}
	}
}

