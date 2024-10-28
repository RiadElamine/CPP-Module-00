#pragma once
#include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		std::string		getFirstName();
		void			setFirstName(std::string firstName);
		std::string 	getLastName();
		void 			setLastName(std::string lastName);
		std::string 	getNickName();
		void 			setNickName(std::string nickName);
		std::string 	getPhoneNumber();
		void 			setPhoneNumber(std::string phoneNumber);
		std::			string getDarkestSecret();
		void 			setDarkestSecret(std::string darkestSecret);
};
