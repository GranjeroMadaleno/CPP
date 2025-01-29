#include <string>
#include <iostream>

// class Contact
// {
//     private:
//         std::string _FirstName, _LastName, _NickName, _PhoneNumber, _DarkestSecret;

//     public:
//         Contact();
//         Contact(std::string FirstName, std::string LastName);
//         ~Contact();

//         void setFirstName(std::string FirstName);
//         void setLastName(std::string LastName);
//         void setNickName(std::string NickName);
//         void setPhoneNumber(std::string PhoneNumber);
//         void setDarkestSecret(std::string DarkestSecret);

//         std::string getFirstName(void) const;
//         std::string getLastName(void);
//         std::string getNickName(void);
//         std::string getPhoneNumber(void);
//         std::string getDarkestSecret(void);
// };

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _number;
        std::string _darkestSecret;

    public:
        Contact()
        {
            std::cout << "Aqui se crea el contacto" << std::endl;
        };
        ~Contact()
        {
            std::cout << "Aqui de destruye el contacto" << std::endl;
        };

        std::string getfirstName(void);
        std::string getlastName(void);
        std::string getnickName(void);
        std::string getnumber(void);
        std::string getdarkestSecret(void);

        void    setfirstName(std::string firstname);
        void    setlastName(std::string lastname);
        void    setnickName(std::string nickname);
        void    setnumber(std::string num);
        void    setdarkestSecret(std::string darkestsecret);

        void printContact(){
            std::cout << "First Name: " << getfirstName() << std::endl;
            std::cout << "Last Name: " << getlastName() << std::endl;
            std::cout << "Nickname: " << getnickName() << std::endl;
            std::cout << "Number: " << getnumber() << std::endl;
            std::cout << "Darkest Secret: " << getdarkestSecret() << std::endl;
        }

        void    displayContact(int i)
        {
            std::cout << "         " << i;
            std::cout << "|";
            spacemaker(getfirstName());
            std::cout << "|";
            spacemaker(getlastName());
            std::cout << "|";
            spacemaker(getnickName());
            std::cout << std::endl;
        }

        void    spacemaker(std::string word)
        {
            int i;
            i = 10;
            if (word.size() == 10)
            {
                std::cout << word;
                return;
            }
            else if (word.size() > 10)
            {
                std::cout << word.substr(0, 9) << ".";
                return;
            }
            while ((i - word.size() > 0))
            {
                std::cout << " ";
                i--;
            }
            std::cout << word;
        }
};
