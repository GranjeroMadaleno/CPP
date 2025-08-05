#include "whatever.hpp"

int	main(void) {
	int	i_first = 7;
	int	i_second = 4;
	swap(i_first, i_second);

	std::cout << i_first << " <-> " << i_second << std::endl;

	char c_first = 'F';
	char c_second = 'S';
	std::cout << min(c_first, c_second) << std::endl;

	std::string str_first = "wenanoxe";
	std::string str_second = "tamañana";
	std::cout << max(str_first, str_second) << std::endl;

}
