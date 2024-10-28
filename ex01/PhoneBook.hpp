#pragma once
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact		contact[8];
		int			index;
		void 		Fill_Contact(int index);
		void 		Display_ContactInfo(size_t i);
		void 		Display_InfoByIndex();
		
	public:
		PhoneBook();
		void 		Add_Contact();
		void 		Search();
};