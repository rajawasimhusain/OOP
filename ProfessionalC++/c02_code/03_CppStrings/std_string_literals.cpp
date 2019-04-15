#include <string>
#include <iostream>

using namespace std;

int main()
{
	auto string1 = "Hello World"; // string1 is a const char*
	auto string2 = "Hello World"s; // string2 is an std::string

	return 0;
}
