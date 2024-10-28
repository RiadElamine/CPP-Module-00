/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:10:04 by relamine          #+#    #+#             */
/*   Updated: 2024/10/21 15:48:45 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	std::string str;
	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		for (size_t c = 0; c < str.length(); c++)
			std::cout << (char)toupper(str[c]);
	}
	std::cout << std::endl;

	return 0;	
}
