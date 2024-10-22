/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:04:05 by relamine          #+#    #+#             */
/*   Updated: 2024/10/22 14:04:06 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}
std::string Contact::getFirstName()
{
	return  this->firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}
std::string Contact::getLastName()
{
	return  this->lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}
std::string Contact::getNickName()
{
	return  this->nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
std::string Contact::getPhoneNumber()
{
	return  this->phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
std::string Contact::getDarkestSecret()
{
	return  this->darkestSecret;
}
