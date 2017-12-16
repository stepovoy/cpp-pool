#include "Contact.class.hpp"

Contact::Contact(void)
{
    Contact::_contactsNumber++;
    if (Contact::_contactsNumber == 8)
        std::cout << "Created a new contact list" << std::endl;
    return;
}

Contact::~Contact(void)
{
    if (Contact::_contactsNumber == 8)
        std::cout << "Contact list is now destroyed" << std::endl;
    Contact::_contactsNumber++;
    return;
}

int Contact::_contactsNumber = 0;