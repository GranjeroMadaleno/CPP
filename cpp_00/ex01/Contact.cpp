#include <Contact.hpp>

Contact::Contact(){
    _FirstName = "";
    _LastName = "";
    _NickName = "";
    _PhoneNumber = "";
    _DarkestSecret = "";
}


// Contact::Contact(std::string FirstName, std::string LastName): _FirstName(FirstName), _LastName(LastName){
//     setFirstName(FirstName);
//     setFirstName(FirstName);
// }

Contact::~Contact(){
}

void Contact::setFirstName(std::string Fname){
    _FirstName = Fname;
}

void Contact::setLastName(std::string Lname){
    _LastName = Lname;
}

void Contact::setNickName(std::string Nname){
    _NickName = Nname;
}

void Contact::setPhoneNumber(std::string Pnumber){
    _PhoneNumber = Pnumber;
}

void Contact::setDarkestSecret(std::string Dsecret){
    _DarkestSecret = Dsecret;
}

std::string Contact::getFirstName(void){
    return _FirstName;
}

std::string Contact::getLastName(void){
    return _LastName;
}

std::string Contact::getNickName(void){
    return _NickName;
}

std::string Contact::getPhoneNumber(void){
    return _PhoneNumber;
}

std::string Contact::getDarkestSecret(void){
    return _DarkestSecret;
}
