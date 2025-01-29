#include <iostream>
#include "Phonebook.hpp"

// int main(void)
// {
//     PhoneBook   book;
//     std::string command;

//     while (1)
//     {
//         std::cin >> command;

//         if (command.compare("ADD") == 0)
//                 std::cout << "ADD\n";    
//         else if (command.compare("SEARCH") == 0)
//                 std::cout << "SEARCH\n";
//         else if (command.compare("EXIT") == 0)
//                 return (0);
//         else
//                 std::cout << "ERROR\n";
//     }
//     return (0);
// }

// int main(void)
// {
//     Contact contacto;
//     std::string str1("OLmopa");
//     std::string str2("kuña");

//     contacto.setfirstName("Macario");
//     contacto.setlastName("Borricos");
//     contacto.setnickName("Atascaburras69");
//     contacto.setnumber("6589856214");
//     contacto.setdarkestSecret("Me pican las pelotas");

//     std::cout << contacto.getfirstName() << std::endl;
//     std::cout << contacto.getlastName() << std::endl;
//     std::cout << contacto.getnickName() << std::endl;
//     std::cout << contacto.getnumber() << std::endl;
//     std::cout << contacto.getdarkestSecret() << std::endl;
//     return (0);
// }



// i max 8

// cada contacto guardado tiene que tener:
// -nombre
// -apellido
// -nick
// -numero
// -secreto

// si alguno de los anteriores está vacio devuelve error

// hay que usar ADD, SEARCH y EXIT

// para añadir info entiendo que habrá que usar set

// para buscar info get


int main(void)
{
    std::string datos;
    PhoneBook phonebook;
    int i = 0;
    while (1)
    {
        std::cin >> datos;
        if (i == 8)
            i = 0;
        if (datos.compare("ADD") == 0)
        {
            phonebook.addcontact(i);
            i++;
        }
        else if (datos.compare("SEARCH") == 0)
        {
            phonebook.searchcontact();
        }
        else if (datos.compare("EXIT") == 0)
        {
                return (0);
        }
        else
                std::cout << "ERROR\n";
    }
    return (0);
}
