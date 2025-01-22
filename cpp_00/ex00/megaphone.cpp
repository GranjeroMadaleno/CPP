#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    int     i;
    size_t  j;

    std::string str;
    if (argc > 1)
    {
        //for (inicialización; condición; actualización)
        for (i = 1; i < argc; i++)
    	{
            str = argv[i];
            for (j = 0; j < str.size(); j++)
                std::cout << (char)std::toupper(str[j]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}
