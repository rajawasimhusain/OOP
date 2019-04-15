#include <iostream>
#include <string>
#include <cstddef>
#include <charconv>

using namespace std;

int main()
{
	std::string out(10, ' ');
	std::cout << "out = " << out << endl;
	
	auto result = std::to_chars(out.data(), out.data() + out.size(), 12345);	
	if (result.ec == std::errc()){ 
		/* Conversion successful. */ 
		std::cout << "out = " << out << endl;	
	}
	
	// Using C++17 structured bindings introduced in Chapter 1, you can write it as follows:
	std::string out2(10, ' ');
	auto [ptr, ec] = std::to_chars(out2.data(), out2.data() + out2.size(), 12345);
	if (ec == std::errc()) { 
		/* Conversion successful. */ 
			std::cout << "out2 = " << out2 << endl;	
	}

	return 0;
}