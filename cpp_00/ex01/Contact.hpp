#include <string>

class Contact
{
    private:
        std::string _FirstName, _LastName, _NickName, _PhoneNumber, _DarkestSecret;

    public:
        Contact();
        Contact(std::string FirstName, std::string LastName);
        ~Contact();

        void setFirstName(std::string FirstName);
        void setLastName(std::string LastName);
        void setNickName(std::string NickName);
        void setPhoneNumber(std::string PhoneNumber);
        void setDarkestSecret(std::string DarkestSecret);
        
        std::string getFirstName(void) const;
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
};
