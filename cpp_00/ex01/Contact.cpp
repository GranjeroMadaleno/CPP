#include <iostream>
#include "Contact.hpp"

std::string Contact::getfirstName(void)
{
    return (_firstName);
}

std::string Contact::getlastName(void)
{
    return (_lastName);
}

std::string Contact::getnickName(void)
{
    return (_nickName);
}

std::string Contact::getnumber(void)
{
    return (_number);
}

std::string Contact::getdarkestSecret(void)
{
    return (_darkestSecret);
}

void    Contact::setfirstName(std::string firstname)
{
    _firstName = firstname;
}
void    Contact::setlastName(std::string lastname)
{
    _lastName = lastname;
}
void    Contact::setnickName(std::string nickname)
{
    _nickName = nickname;
}
void    Contact::setnumber(std::string num)
{
    _number = num;
}
void    Contact::setdarkestSecret(std::string darkestsecret)
{
    _darkestSecret = darkestsecret;
}
