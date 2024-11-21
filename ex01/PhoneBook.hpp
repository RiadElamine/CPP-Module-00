/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:49:22 by relamine          #+#    #+#             */
/*   Updated: 2024/11/16 21:24:59 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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