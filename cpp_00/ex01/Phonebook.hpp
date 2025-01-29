#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contactlist[8];

    public:
        PhoneBook(){
            std::cout << "PhoneBook created" << std::endl;
        };
        ~PhoneBook(){
            std::cout << "PhoneBook destroyed" << std::endl;
        };

        void    addcontact(int i)
        {
            std::string nombre;
            std::string apellido;
            std::string nick;
            std::string num;
            std::string dark;
     
            std::cout << "Add first name: " << std::endl;
            std::cin >> nombre;
            contactlist[i].setfirstName(nombre);
            std::cout << "Add last name: " << std::endl;
            std::cin >> apellido;
            contactlist[i].setlastName(apellido);
            std::cout << "Add nickname: " << std::endl;
            std::cin >> nick;
            contactlist[i].setnickName(nick);
            std::cout << "Add number: " << std::endl;
            std::cin >> num;
            contactlist[i].setnumber(num);
            std::cout << "Add darkest secret: " << std::endl;
            std::cin >> dark;
            contactlist[i].setdarkestSecret(dark);
            std::cout << "Contacto numero: " << i << std::endl; 
            contactlist[i].printContact();
        }
        void    searchcontact(void)
        {
            int i = 0;
            int k;
            std::cout << "     Index| Firstname|  Lastname|  Nickname" << std::endl;
            while (i < 8)
            {
                contactlist[i].displayContact(i);
                i++;
            }
            std::cout << "Dime el Index" << std::endl;
            std::cin >> k;
            if ((k < 9) && (k >= 0))
            {
                std::cout << "valor de k" << k << std::endl;
                contactlist[k].printContact();
            }
        }
};

#endif