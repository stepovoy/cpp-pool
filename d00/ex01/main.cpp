#include "Contact.class.hpp"

static void showContactInfo(Contact *contact, int searchIndex)
{
    int nb;
    std::cout << "Search for an index: ";
    std::cin >> nb;
    
    if (searchIndex == 0)
        return ;
    
    while (nb > 8 || nb < 0 || nb > searchIndex - 1)
    {
        std::cout << "Input index is not valid. Lets try one more time." << std::endl
                  << "Search for an index: ";
        std::cin >> nb;
    }

    std::cout << "Displaying results for id: " << nb << std::endl;
    std::cout << "    first name:            " << contact[nb].firstName << std::endl;
    std::cout << "    last name:             " << contact[nb].lastName << std::endl;
    std::cout << "    nickname:              " << contact[nb].nickName << std::endl;
    std::cout << "    login:                 " << contact[nb].login << std::endl;
    std::cout << "    postal adress:         " << contact[nb].postalAddress << std::endl;
    std::cout << "    email adress:          " << contact[nb].emailAddress << std::endl;
    std::cout << "    phone number:          " << contact[nb].phoneNumber << std::endl;
    std::cout << "    birthday date:         " << contact[nb].birthdayDate << std::endl;
    std::cout << "    favorite meal:         " << contact[nb].favoriteMeal << std::endl;
    std::cout << "    underwear color:       " << contact[nb].underwearColor << std::endl;
    std::cout << "    darkest secret:        " << contact[nb].darkestSecret << std::endl;
}

static int showContactList(Contact *contact)
{
    int i = 0;
    int searchIndex = 0;

    std::cout << std::right << std::setw(10) << "index" << " | ";
    std::cout << std::right << std::setw(10) << "first name" << " | ";
    std::cout << std::right << std::setw(10) << "last name" << " | ";
    std::cout << std::right << std::setw(10) << "nickname" << std::endl;
    
    while (i < 8)
    {
        if (!contact[i].login.empty())
        {
            searchIndex++;
            std::cout << std::right << std::setw(10) << i << " | ";
            if (contact[i].firstName.length() > 10)
                std::cout << std::right << std::setw(10) << contact[i].firstName.substr(0, 9).append(".") << " | ";  
            else
                std::cout << std::right << std::setw(10) << contact[i].firstName.substr(0, 10) << " | ";
            if (contact[i].lastName.length() > 10)
                std::cout << std::right << std::setw(10) << contact[i].lastName.substr(0, 9).append(".") << " | ";
            else
                std::cout << std::right << std::setw(10) << contact[i].lastName.substr(0, 10) << " | ";
            if (contact[i].nickName.length() > 10)
                std::cout << std::right << std::setw(10) << contact[i].nickName.substr(0, 9).append(".") << std::endl;
            else
                std::cout << std::right << std::setw(10) << contact[i].nickName.substr(0, 10) << std::endl;
        }
        i++;
    }
    return searchIndex;
}

static void addInfo(Contact *contact, int searchIndex, const char *info)
{
    std::string input;
    
    std::cout << "Input your " << info << ": ";
    std::getline(std::cin, input, '\n');
    
    while (input.empty())
    {
        std::cout << "Input cannot be empty. Please try one more time." << std::endl
                  << "Input your " << info << ": ";
        std::getline(std::cin, input, '\n');
    }

    switch (searchIndex)
    {
        case 0:
            contact->firstName = input;
        case 1:
            contact->lastName = input;
        case 2:
            contact->nickName = input;
        case 3:
            contact->login = input;
        case 4:
            contact->postalAddress = input;
        case 5:
            contact->emailAddress = input;
        case 6:
            contact->phoneNumber = input;
        case 7:
            contact->birthdayDate = input;
        case 8:
            contact->favoriteMeal = input;
        case 9:
            contact->underwearColor = input;
        case 10:
            contact->darkestSecret = input;
    }
}

static void addContact(Contact *contact)
{
    addInfo(contact, 0,  "first name");
    addInfo(contact, 1,  "last name");
    addInfo(contact, 2,  "nickname");
    addInfo(contact, 3,  "login");
    addInfo(contact, 4,  "postal adress");
    addInfo(contact, 5,  "email adress");
    addInfo(contact, 6,  "phone number");
    addInfo(contact, 7,  "birthday date");
    addInfo(contact, 8,  "favorite meal");
    addInfo(contact, 9,  "underwear color");
    addInfo(contact, 10, "darkest secret");
}

int main(void)
{
    Contact contact[8];

    std::string input;
    int i = 0;
    int searchIndex;

    while (std::getline(std::cin, input, '\n'))
    {
        if (input == "ADD")
        {
            if (i <= 8)
                addContact(&contact[i]);
            else
                std::cout << "You cannot add more than 8 contacts." << std::endl;
            i++;
        }
        else if (input =="SEARCH")
        {
            searchIndex = showContactList(contact);
            showContactInfo(contact, searchIndex);
        }
        else if (input == "EXIT")
        {
            std::cout << "Exiting..." << std::endl;
            break ;
        }
    }
    
    return (0);
}