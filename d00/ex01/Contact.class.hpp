#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>

class Contact
{
	public:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string login;
		std::string postalAddress;
		std::string emailAddress;
		std::string phoneNumber;
		std::string birthdayDate;
		std::string favoriteMeal;
		std::string underwearColor;
		std::string darkestSecret;
		
		Contact(void);
		~Contact(void);
		
	private:
		static int _contactsNumber;
};

#endif