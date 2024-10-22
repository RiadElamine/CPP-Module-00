#pragma once
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact	contact[8];
		int		index;
		
	public:
		PhoneBook();
		std::string set_attribute(std::string attribute);
		void Fill_Contact(int index);
		void Add_Contact();
		void Search();
		void Display_ContactInfo(size_t i);
		void Display_InfoByIndex();
};