#include <iostream>
#include <charconv>
#include <system_error>
#include <string_view>
#include <array>

using namespace std;

int main()
{
	// Using < C++17
	std::string out1(10, ' ');
	auto result = std::to_chars(out1.data(), out1.data() + out1.size(), 12345);
	if (result.ec == std::errc()) { /* Conversion successful. */ }
	std::cout << "out1 = " << out1 << std::endl;
	
	// Using C++17 structured bindings introduced
	std::string out2(10, ' ');
	auto [ptr, ec] = std::to_chars(out2.data(), out2.data() + out2.size(), 12345);
	if (ec == std::errc()) { /* Conversion successful. */ }
	std::cout << "out2 = " << out2 << std::endl;

	return 0;
}
